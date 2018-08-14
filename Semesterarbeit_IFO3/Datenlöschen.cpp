#include "Datenlöschen.h"
#include "Daten.h"

static Mitarb MA[100];
static ABL AL[100];
static ABT AT[100];

void speichern_löschen() {
	speichernal(AT, AL);
	speichernma(MA);
}

void read_löschen() {
	readal(AT, AL);
	readma(MA);
}
