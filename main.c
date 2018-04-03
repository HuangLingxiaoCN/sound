// this file contains the main function of our project
#include "sound.h"
#include <stdlib.h>
#include <signal.h>
#include <stdio.h>
#include "screen.h"
int main(void) {
	int ret;
	while(1){	//loop runs forever
		//run system command "arecord" to recall 1 sec of wav
		ret = system("arecord -q -r16000 -c1 -f S16_LE -d1 test.wav");
		if(WIFSIGNALED(ret) && (WTERMSIG(ret)==SIGINT)) break;
		//display WAV header
		dispWAVHeader("test.wav");
		//display WAV strength as decimal values
		dispWAVData("test.wav");
		//break;	// loop runs just once
	}
	return 0;
}
