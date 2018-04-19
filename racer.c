#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "racer.h"
#include "display.h"

#define MAX_GRAPHIC_LENGTH 9

long milliseconds = 0;

/*
---------------------------------------------------------
	InitRacers
		miliseconds - number of milliseconds to wait
---------------------------------------------------------
*/
void initRacers(long miliseconds){
	milliseconds = milliseconds;
	set_cur_pos(0, 0);
}

/*
---------------------------------------------------------
	MakeRacer
		name - name of cruiser
		position - lane of cruiser
---------------------------------------------------------
*/
Racer *makeRacer(char *name, int position){
	Racer *newRacer = malloc(sizeof(racer));
	newRacer->dist = 1;
	newRacer->row = position;
	
	newRacer->graphic = malloc(9*sizeof(char));
	int strChar = 0;
	int len = strLen(name);
	int remaining = MAX_GRAPHIC_LENGTH - len;
	for(int i = 0; i < MAX_GRAPHIC_LENGTH; i++){
		if (i < remaining/2){
			newRacer->graphic[i] = '_';
		}
		else if (i >= ((remaining/2 + len))){
			newRacer->graphic[i] = '_';
		}
		else{
			newRacer->graphic[i] = name[strChar];
			strChar++;
		}
	}	 	
	return newRacer;
}

/*
---------------------------------------------------------
	DestroyRacer
		Frees a racer from memory
		racer - 
---------------------------------------------------------
*/
void destroyRacer(Racer *racer){
	free(racer->graphic);
	free(racer);
}


void putRacer(Racer *racer){
	for(int i = 0; i < MAX_GRAPHIC_LENGTH; i++){
		put(racer->graphic[i]);
		set_cur_pos(racer->row, racer->dist)
	}
}

/*
---------------------------------------------------------
	
---------------------------------------------------------
*/
void *run(void *racer){
	//Draw initial racecar
	set_cur_pos(racer->row, racer->dist);
	putRacer(racer);
	
	while(racer->dist != FINISH_LINE){
		int randomeTime = rand()%milliseconds;
		usleep(randomTime);
		put(' ');
		racer->dist++;
		set_cur_pos(racer->row, racer->dist);
		putRacer(racer);
	}	
}
