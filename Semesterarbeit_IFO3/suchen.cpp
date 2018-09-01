#include "suchen.h"
#include <conio.h>
#include <Windows.h>
#include <stdio.h>
#include <string>
#include "Daten.h"

ABT AT_save[100];
ABL AL_save[100];


Mitarb_2 search_ma_vname(Mitarb_2 MA2[], char search[20], int start_pos)
{
	char kontrolle[20];
	int i, z, len = 0;

	len = strlen(search);

	for (z = 0; z < len; z++) //Jedes Zeichen der Eingabe von Kleinbuchstabe nach Großbuchstabe
		if (search[z] >= 'a' && search[z] <= 'z')
			search[z] = toupper(search[z]);

	for (i = start_pos; i < 100; i++) //Jeden Mitarbeitervorname vergleichen
	{
		strcpy(kontrolle, MA2[i].MA.VNA);
		len = strlen(kontrolle);
		for (z = 0; z < len; z++)//Jedes Zeichen des Arrays von Kleinbuchstabe nach Großbuchstabe
			if (kontrolle[z] >= 'a' && kontrolle[z] <= 'z')
				kontrolle[z] = toupper(kontrolle[z]);

		if (strstr(kontrolle, search) != NULL) //Wenn Erfolgreich Beide Strings verglichen
		{
			MA2->last_pos = i;
			return MA2[1];
			//Ausgabe vollständigen Datensatz
			//menge++;
			//show_ma(ma, i, ab, counter_ab); //Ausgabe
			//printf("\n");
		}
	}
}


void setATAL(ABT AT, int AT_id, ABL AL, int AL_id)
{
	//AT_save[AT_id].FA = "XYZ";
	AT_save[AT_id] = AT;

	//AL_save[AL_id].NA = "XYZ";
	AL_save[AL_id] = AL;
}

ABT getAT(int AT_id)
{
	return AT_save[AT_id];
}

ABL getAL(int AL_id)
{
	return AL_save[AL_id];
}

void emptyATAL()
{
	for (int i = 0; i < 100; i++)
	{
		strcpy(AT_save[i].FA, "XYZ");
		strcpy(AL_save[i].NA, "XYZ");
	}//*/
}