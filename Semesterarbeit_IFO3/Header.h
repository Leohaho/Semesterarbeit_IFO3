
#pragma once
#include <stdio.h>
//#include "Daten.h"


int AL_neu4442;
//ABT AT_neu4442[100];
//Mitarb MA_neu4442[100];
//int lastAL_Header;
/*
void setAL(ABL Abteilungsleiter)
{
	AL_neu[lastAL + 1] = Abteilungsleiter;
	lastAL_Header++;
}

//

ABL getAL(int ID)
{
	return AL_neu[ID];
}//*/
#ifndef Header_h
#define Header_h
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <string.h>

typedef struct ABL {
	char NA[20];		/*Name*/
	char VNA[20];		/*Vorname*/
	char AB[20];		/*Abteilung*/
	char MNR[20];			/*Mobilnummer*/
	char FNR[20];			/*Festnetz*/
	char mail[100];		/*Mailadresse*/
	char STR[20];		/*Straße*/
	char HNR[20];			/*Hausnummer*/
	char POST[20];			/*Postleitzahl*/
	char ORT[20];		/*Ort/Stadt*/

};

typedef struct ABT {
	char FA[30];	/*Firma/Name*/
	char STR[20];	/*Straße*/
	char HNR[20];	/*Hausnummer*/
	char POST[20];	/*Postleitzahl*/
	char ORT[20];	/*Ort/stadt*/
	char ST[20];	/*Standort*/
	char ABL[40];	/*Name Abteilungsleiter*/
	int ID;			/*Abteilungs ID*/
};

typedef struct Mitarb {
	int NR;			/*Mitarbeiternummer*/
	char NA[20];	/*Name*/
	char VNA[20];	/*Vorname*/
	char EM[20];	/*Eintritsmonat*/
	char EJ[20];	/*Eintritsjahr*/
	char STR[20];	/*Straße*/
	char HNR[20];	/*Hausnummer*/
	char POST[20];	/*Postleitzahl*/
	char ORT[20];	/*Ort/stadt*/
	char MNR[20];	/*Mobilnummer*/
	char FNR[20];	/*Festnetz*/
	char mail[100];	/*Mailadresse*/
	char AB[20];	/*Abteilung*/
	char VG[20];	/*Vorgesetzter*/

};


extern ABL AL[100];
extern ABT AT[100];
extern Mitarb MA[100];
extern int save;

#endif // Header_h
