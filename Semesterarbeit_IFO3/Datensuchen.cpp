#include "Datensuchen.h"
#include "Daten.h"

static Mitarb MA[100];
static ABL AL[100];
static ABT AT[100];

void speichern_suche() {
	speichernal(AT, AL);
	speichernma(MA);
}

void read_suche() {
	readal(AT, AL);
	readma(MA);
}