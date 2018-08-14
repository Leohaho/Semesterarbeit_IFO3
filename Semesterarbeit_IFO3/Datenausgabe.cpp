#include "Datenausgabe.h"
#include "Daten.h"

static Mitarb MA[100];
static ABL AL[100];
static ABT AT[100];

void speichern_ausgabe() {
	speichernal(AT, AL);
	speichernma(MA);
}

void read_ausgabe() {
	readal(AT, AL);
	readma(MA);
}