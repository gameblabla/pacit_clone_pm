#!/bin/sh
img2pm -b 0x011000 -o src/namco.h -t2 namco.png
img2pm -b 0x012000 -o src/title.h -t2 title.png
img2pm -b 0x013000 -o src/gamefield.h -t2 gamefield.png
img2pm -b 0x014000 -o src/gameover.h -t2 gameover.png
img2pm -o src/sprites.h -s2 sprites.png
