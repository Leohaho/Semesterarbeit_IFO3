#include <stdio.h>
#include <conio.h> /*für getch um enter drücken zu sparen*/
#include <cstdlib> /*eingefügt für system(); zum Konsole clearen string zu int wert ändern*/
#include <string.h> /*Um zwei Strings miteinander zu vergleichen und zum erzeugen der Mail adresse*/
#include "Daten.h"
/*
void Hauptmenü(void) {
	ABL AL[100];
	ABT AT[100];
	Mitarb MA[100];
	int auswahl1,save;
	readma(MA);
	readal(AT, AL);
	system("color 0F");
	printf("Daten geladen");
	save = 1;
	do {
		Menu1();
		auswahl1 = getche() - 0; //-0 um aus dem zeichencode den getche zurückgibt eine realzahl zu machen

		switch (auswahl1) {
		case '1': save = 0; dateneingabe(MA, AL, AT);
			break;
		case '2': save = 0; datensuche(MA, AL, AT);
			break;
		case '3': save = 1; speichernma(MA); speichernal(AT, AL);
			break;
		case '4': save = 0; datenlöschen(MA, AL, AT);
			break;
		case '5': save = 0; datenändern(MA, AL, AT);
			break;
		case '6': save = 0; datenausgabe(MA, AL, AT);
			break;
		default: if (auswahl1 != 'x') printf("\n--Falsche Eingabe--");
			break;
		};
	} while (auswahl1 != 'x');

	if (save != 1) { //abfrage save um zu prüfen ob zuletzt vor dem beenden gespeichert wurde. Wenn ja ist erneute abfrage unnötig
		Save_abfrage(save, AT, AL, MA);
	}
}
*/