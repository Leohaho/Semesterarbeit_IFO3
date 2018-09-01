#ifndef Daten_h
#define Daten_h

#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <string.h>

typedef struct ABL{
	char NA[20];		/*Name*/
	char VNA[20];		/*Vorname*/
	char AB[20];		/*Abteilung*/
	char MNR[20];			/*Mobilnummer*/
	char FNR[20];			/*Festnetz*/
	char mail[100];		/*Mailadresse*/
	char STR[20];		/*Straﬂe*/
	char HNR[20];		/*Hausnummer*/
	char POST[20];		/*Postleitzahl*/
	char ORT[20];		/*Ort/Stadt*/

};

typedef struct ABT{
	char FA[30];	/*Firma/Name*/
	char STR[20];	/*Straﬂe*/
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
	char STR[20];	/*Straﬂe*/
	char HNR[20];	/*Hausnummer*/
	char POST[20];	/*Postleitzahl*/
	char ORT[20];	/*Ort/stadt*/
	char MNR[20];	/*Mobilnummer*/
	char FNR[20];	/*Festnetz*/
	char mail[100];	/*Mailadresse*/
	char AB[20];	/*Abteilung*/
	char VG[20];	/*Vorgesetzter*/

};

void Menu1();
void dateneingabe(Mitarb *MA, ABL *AL, ABT *AT);
void datensuche(Mitarb *MA, ABL *AL, ABT *AT);
void datenlˆschen(Mitarb *MA, ABL *AL, ABT *AT);
void daten‰ndern(Mitarb *MA, ABL *AL, ABT *AT);
void datenausgabe(Mitarb *MA, ABL *AL, ABT *AT);
void eingabema(int P, Mitarb *MA, ABT *AT);
void eingabeal(int L, ABL *AL, ABT *AT);
void eingabeat(int I, ABT *AT, ABL *AL);
void ausgabema(int M, Mitarb *MA);
void ausgabeal(int N, ABL *AL);
void ausgabeat(int O, ABT *AT);
void andernma(Mitarb *MA, ABT *AT);
void andernal(ABL *AL, ABT *AT, Mitarb *MA);
void andernat(Mitarb *MA, ABL *AL, ABT *AT);
void loeschenma(Mitarb *MA);
void loeschenal(ABL *AL, ABT *AT);
void speichernma(Mitarb *MA);
void speichernal(ABT *AT, ABL *AL);
void readma(Mitarb *MA);
void readal(ABT *AT, ABL *AL);
void replace_character(char* string);
void Buffer(char* string);
void ENTER();
void Save_abfrage(int save, ABT *AT, ABL *AL, Mitarb *MA);


#endif