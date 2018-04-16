//This program aims to setup vertical bars and change their colors when the sound level is too high
#include "screen.h"
#include <stdio.h>

/*
	function definition of clearScreen()
	This function uses VT100 escape sequence \ESC[2J to make whole
	terminal screen empty
	argument: no
	return: no
*/
void clearScreen(void){
	printf("%c[2J", ESC);
	fflush(stdout);
}

/*
	function definition of gotoxy()
	This function uses VT100 escape sequence \ESC[row;colH to set cursor
	to a specific location on the terminal screen
	argument: 	row number, 1 is top row
				col number, 1 is left column
	return: no
*/
void gotoxy(int row, int col){
	printf("%c[%d;%dH", ESC, row, col);
	fflush(stdout);
}

/*
	function definition of setColor()
*/
void setColor(int color){
	if(color>=BLACK && color<=WHITE){
		printf("%c[1;%dm", ESC, color);
		fflush(stdout);
	}
}

//function definition of dispBar(), this function displays a vertical
//bar for the given dB value. The value varies between 30 to 90
//we need to render 3dB for one row and 90dB will be displayed as bar
//of 30 rows
void dispBar(int col, double dB){
	int i;	//loop counter
	for(i=0; i<dB/3; i++){
		gotoxy(30-i, col+1);
#ifndef UNICODE		// if unicode is not enabled
		printf("%c", '*');
#else
		if(i < 50/3) setColor(WHITE);
		else if(i < 70/3) setColor(YELLOW);
		else setColor(RED);
		printf("%s", BAR);
#endif
	}
}
