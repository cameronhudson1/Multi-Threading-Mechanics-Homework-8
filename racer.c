#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "racer.h"

/*
---------------------------------------------------------
	InitRacers
		miliseconds - number of milliseconds to wait
---------------------------------------------------------
*/
void initRacers(long miliseconds){
	
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
	newRacer->dist = 0;
	newRacer->row = position;
	int remainingGraphicChars = 9 - strlen(name);
	newRacer->
	
}

/*
---------------------------------------------------------

---------------------------------------------------------
*/
void destroyRacer(Racer *racer){
	
}

/*
---------------------------------------------------------

---------------------------------------------------------
*/
void *run(void *racer){
	
}
