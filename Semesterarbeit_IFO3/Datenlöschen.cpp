#include<stdlib.h>
#include<assert.h>

#include "Datenlöschen.h"
#include "Daten.h"

static Mitarb MA[100];
static ABL AL[100];
static ABT AT[100];
static int T = 0;
static int B = 0;
static bool maab = true;

void speichern_löschen() {
	speichernal(AT, AL);
	speichernma(MA);
}

char* namelöschen() {
	char* name;
	if (maab) {
		name = strcat(strcat(MA[T].VNA, " "), MA[T].NA);
	}
	else {
		name = strcat(strcat(AL[B].VNA, " "), AL[B].NA);
	}
	return name;
}

void löschen() {
	if(maab){
		MA[T].NR = 108;
	}
	else{
		strcpy(AL[B].NA, "000");
		strcpy(AT[B].ABL, "nicht besetzt");
	}
}

void read_löschen() {
	readal(AT, AL);
	readma(MA);
}


int finden(char G[20], bool Ma) {
	maab = Ma;
	if (Ma) {
		char  N;
		int Y, P;

		P = 2;
		for (T = 0; T < 102; T++) {
			if (MA[T].NR == atoi(G)) {
				break;
			}
		}
	}
	else {
		char  N;
		B = atoi(G);
		for (T = 0; T < 102; T++) {
			if (AT[T].ID == atoi(G)) {
				break;
			}
		}
	}
	printf("\i",T);
	return T;
}
