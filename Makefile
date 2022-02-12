TARGET = pacit

C_SOURCES := src\isr.c src\main.c
ASM_SOURCES := src\startup.asm

include ../../pm.mk
