#include "Daten�ndern.h"
#include "Daten.h"

static Mitarb MA[100];
static ABL AL[100];
static ABT AT[100];

void speichern_�ndern() {
	speichernal(AT, AL);
	speichernma(MA);
}

void read_�ndern() {
	readal(AT, AL);
	readma(MA);
}