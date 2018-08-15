#include "Dateneingabe.h"
#include "Daten.h"

static Mitarb MA[100];
static ABL AL[100];
static ABT AT[100];

void speichern_eingabe() {
	speichernal(AT, AL);
	speichernma(MA);
}

void read_eingabe() {
	readal(AT, AL);
	readma(MA);
}

void ausgabe_test(char *test) {
	strcpy(test, MA[1].NA);
}