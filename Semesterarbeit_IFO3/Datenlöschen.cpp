#include "Datenl�schen.h"
#include "Daten.h"

static Mitarb MA[100];
static ABL AL[100];
static ABT AT[100];

void speichern_l�schen() {
	speichernal(AT, AL);
	speichernma(MA);
}

void read_l�schen() {
	readal(AT, AL);
	readma(MA);
}
