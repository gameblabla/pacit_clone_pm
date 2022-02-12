/*
 * Pac-it clone for Pokemon Mini
 * Copyright gameblabla 2022
 * Licensed under MIT license
*/

#include "pm.h"
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include "sprites.h"
#include "namco.h"
#include "title.h"
#include "gamefield.h"
#include "gameover.h"


uint8_t free_time;
static uint8_t game_status = 0;
static uint8_t counter;
static uint16_t game_counter;

static uint8_t keys;
static uint16_t score = 0;
static uint16_t hiscore = 0;
static uint8_t scored[4], hiscored[4];
static uint8_t hearts = 3;
static uint8_t speed = 1;

static uint8_t dots[3];

static uint8_t rand_a_b(uint8_t a, uint8_t b)
{
    return rand()%(b-a) +a;
}

/* Only calls this when score changes */
static void Add_Score(uint8_t toadd)
{
	uint8_t i;
	score += toadd;
	scored[0] = (score / 1000) % 10;
	scored[1] = (score / 100) % 10;
	scored[2] = (score / 10) % 10;
	scored[3] = score % 10;
	
	// Refresh score
	for(i=0;i<4;i++)
	{
		OAM[5 + i].tile = 5 + scored[i];
	}
}

static void Load_status(uint8_t st)
{
	uint8_t i;
	
	PRC_SCROLL_Y = 0;
	PRC_SCROLL_X = 0;
	counter = 0;
	game_status = st;
	
	// OAM reset
	for(i=0;i<24;i++)
	{
		OAM[i].x = 0;
		OAM[i].y = 0;
		OAM[i].tile = 0;
		OAM[i].ctrl = 0;
	}
	
	switch(st)
	{
		// Namco screen
		case 0:
			PRC_MODE = COPY_ENABLE|SPRITE_ENABLE|MAP_ENABLE|MAP_12X16;
			PRC_MAP = namco_frame0;
		break;
		// Titlescreen
		case 1:
			PRC_MODE = COPY_ENABLE|SPRITE_ENABLE|MAP_ENABLE|MAP_12X16;
			PRC_MAP = title_frame0;
		break;
		// Game
		case 2:
			PRC_MODE = COPY_ENABLE|SPRITE_ENABLE|MAP_ENABLE|MAP_16X12;
			PRC_MAP = gamefield_frame0;
			
			score = 0;
			game_counter = 0;
			speed = 1;
			
			// Dot
			for(i=0;i<3;i++)
			{
				OAM[i].x = 128;
				OAM[i].y = (i * 16) + 32;
				OAM[i].tile = 3;
				OAM[i].ctrl = OAM_ENABLE;
				dots[i] = 1 + (i * 24);
			}
			
			// Player
			OAM[3].x = 16;
			OAM[3].y = 48;
			OAM[3].tile = 1;
			OAM[3].ctrl = OAM_ENABLE;
			
			// Enemy
			OAM[4].x = 90;
			OAM[4].y = 40;
			OAM[4].tile = 4;
			OAM[4].ctrl = OAM_ENABLE;
			
			for(i=0;i<4;i++)
			{
				scored[i] = 0;
			}
			
			// Score
			for(i=0;i<4;i++)
			{
				OAM[5 + i].x = 104;
				OAM[5 + i].y = 48 + (i * 8);
				OAM[5 + i].tile = 5;
				OAM[5 + i].ctrl = OAM_ENABLE;
			}
			
			// Hearts
			for(i=0;i<3;i++)
			{
				OAM[10 + i].x = 104;
				OAM[10 + i].y = 20 + (i * 8);
				OAM[10 + i].tile = 15;
				OAM[10 + i].ctrl = OAM_ENABLE;
			}
			
			hearts = 3;
		break;
		// Game over screen
		case 3:
			PRC_MODE = COPY_ENABLE|SPRITE_ENABLE|MAP_ENABLE|MAP_12X16;
			PRC_MAP = gameover_frame0;
			
			if (score > hiscore)
			{
				hiscored[0] = (score / 1000) % 10;
				hiscored[1] = (score / 100) % 10;
				hiscored[2] = (score / 10) % 10;
				hiscored[3] = score % 10;	
				hiscore = score;
			}
			
			for(i=0;i<4;i++)
			{
				OAM[i + 4].x = 64 + (i * 8);
				OAM[i + 4].y = 52;
				OAM[i + 4].tile = 5 + hiscored[i];
				OAM[i + 4].ctrl = OAM_ENABLE;
			}
			
			for(i=0;i<4;i++)
			{
				OAM[i].x = 64 + (i * 8);
				OAM[i].y = 64;
				OAM[i].tile = 5 + scored[i];
				OAM[i].ctrl = OAM_ENABLE;
			}
		break;
	}

    for (i=0; i<12*16; i++) {
        TILEMAP[i] = i;
    }
}

static uint8_t Collision(uint8_t x, uint8_t y, uint8_t x2, uint8_t y2, uint8_t size_x, uint8_t size_x2)
{
	if ((x + size_x > x2) && (x < x2 + size_x) && (y + size_x2 > y2) && (y < y2 + size_x2))
		return 1;
		
	return 0;
}

static void Gameplay(void)
{
	uint8_t i;
	static uint8_t player_counter = 0;
	static uint8_t enemy_status = 0;
	uint8_t extra;
	
	/* Player's animation */
	player_counter++;
	if (player_counter > 8)
	{
		OAM[3].tile = 1;
		player_counter = 0;
	}
	else if (player_counter > 4)
	{
		OAM[3].tile = 2;
	}
	
	extra = 0;
	if (keys & KEY_A)
	{
		extra = 1;
	}
	
	if ((keys & KEY_UP)) 
	{
		OAM[3].y = OAM[3].y - (2 + extra);
	} 
	else if ((keys & KEY_DOWN))
	{
		OAM[3].y = OAM[3].y + (2 + extra);
	}
	
	if (OAM[3].y < 16) OAM[3].y = 16;
	else if (OAM[3].y > 69) OAM[3].y = 69;
	
	/* Enemy movement */
	switch (enemy_status)
	{
		case 0:
			OAM[4].y-=1;
			if (OAM[4].y < 16) enemy_status = 1;
		break;
		case 1:
			OAM[4].y+=1;
			if (OAM[4].y > 69) enemy_status = 0;
		break;
	}
	
	for(i=0;i<3;i++)
	{
		if (dots[i] > 0)
		{
			dots[i]++;
			if (dots[i] > 64)
			{
				OAM[i].x = 88;
				OAM[i].y = OAM[4].y;
				dots[i] = 0;
			}
		}
		else
		{
			OAM[i].x -= speed;
			if (OAM[i].x < 8)
			{
				OAM[i].x = 128;
				dots[i] = rand_a_b(16, 64);
				hearts--;
			}
			
			if (Collision(OAM[i].x, OAM[i].y, OAM[3].x, OAM[3].y, 6, 11))
			{
				Add_Score(1);
				OAM[i].x = 128;
				dots[i] = rand_a_b(16, 64);
			}
			
		}
	}
	
	if (game_counter < 1000) game_counter++;
	
	if (game_counter > 240)
	{
		speed = 2;
	}
	else if (game_counter > 480)
	{
		speed = 3;
	}
	else if (game_counter > 990)
	{
		speed = 4;
	}
	
	/* Routine for setting number of hearts available */
	/* Replace this with a memset */
	for(i=0;i<3;i++)
	{
		OAM[10 + i].tile = 16;
	}
	for(i=0;i<hearts;i++)
	{
		OAM[10 + i].tile = 15;
	}
	
	if (hearts < 1)
	{
		Load_status(3);
	}
}

int main(void)
{
	PRC_MODE = COPY_ENABLE|SPRITE_ENABLE|MAP_ENABLE|MAP_12X16;
	PRC_RATE = RATE_36FPS;

    PRC_SPR = sprites;
	Load_status(0);

    for(;;) 
    {
        TMR1_OSC = 0x11; // Use Oscillator 2 (31768Hz)
        TMR1_SCALE = 0x08 | 0x02; // Scale 2 (8192 Hz)
        TMR1_CTRL = 0x06; // Enable timer 2 at 0
        wait_vsync();
        TMR1_CTRL = 0; // Pause timer
        free_time = 255-TMR1_CNT_L;
        
        keys = ~KEY_PAD;
        
        switch(game_status)
        {
			// Namco screen
			case 0:
				counter++;
				if (counter > 120 || (keys & KEY_A))
				{
					counter = 0;
					Load_status(1);
				}
			break;
			// Titlescreen
			case 1:
				if (counter < 36) counter++;
				
				if (counter >= 36 && (keys & KEY_A))
				{
					Load_status(2);
				}
			break;
			// Game
			case 2:
				 PRC_SCROLL_X++;
				 if (PRC_SCROLL_X > 31) PRC_SCROLL_X = 0;
				 
				 Gameplay();
			break;
			// Game over screen
			case 3:
				if (counter < 72) counter++;
				if (counter >= 72 && (keys & KEY_A))
				{
					counter = 0;
					Load_status(1);
				}
			break;
		}
       
    }
}
