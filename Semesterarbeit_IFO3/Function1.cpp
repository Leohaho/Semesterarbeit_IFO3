#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <string.h>
#include "Daten.h"


void speichernma(Mitarb *MA) {
	FILE *fpma;
	int Z; 


	fpma = fopen("Mitarbeiter.txt", "w");
	if (fpma == NULL) {
		printf("Datei konnte nicht ge%cffnet werden", 148);
	}else {
		
		for (Z = 1; Z < 102; Z++) {
			
			if (MA[Z].NR == Z) { //Vorteil fprintf geschriebene Datei auch ohne Programm lesbar
				fprintf(fpma, "%i\n", Z);
				fprintf(fpma, "%s\n", MA[Z].NA);
				fprintf(fpma, "%s\n", MA[Z].VNA);
				fprintf(fpma, "%s\n", MA[Z].EM);
				fprintf(fpma, "%s\n", MA[Z].EJ);
				fprintf(fpma, "%s\n", MA[Z].STR);
				fprintf(fpma, "%s\n", MA[Z].HNR);
				fprintf(fpma, "%s\n", MA[Z].POST);
				fprintf(fpma, "%s\n", MA[Z].ORT);
				fprintf(fpma, "%s\n", MA[Z].MNR);
				fprintf(fpma, "%s\n", MA[Z].FNR);
				fprintf(fpma, "%s\n", MA[Z].mail);
				fprintf(fpma, "%s\n", MA[Z].AB);
				fprintf(fpma, "%s\n", MA[Z].VG);
			}

		}
	}
	fclose(fpma);
};  

void speichernal(ABT *AT, ABL *AL) {
	FILE *fpat;
	int W; /*AL*/

	fpat = fopen("Abteilung.txt", "w");

	if (fpat == NULL) {
		printf("Datei konnte nicht ge%cffnet werden", 148);
	}
	else {

		for (W = 1; W < 102; W++) {
			
			if (AT[W].ID == W) {
				fprintf(fpat, "%i\n", AT[W].ID);
				fprintf(fpat, "%s\n", AT[W].FA);
				fprintf(fpat, "%s\n", AT[W].ST);
				fprintf(fpat, "%s\n", AT[W].STR);
				fprintf(fpat, "%s\n", AT[W].HNR);
				fprintf(fpat, "%s\n", AT[W].POST);
				fprintf(fpat, "%s\n", AT[W].ORT);
				fprintf(fpat, "%s\n", AT[W].ABL);
				 if (strcmp(AT[W].ABL, "nicht besetzt") == 0) {
					fprintf(fpat, "%s\n", "000");
					fprintf(fpat, "%s\n", "0");
					fprintf(fpat, "%s\n", "0");
					fprintf(fpat, "%s\n", "0");
					fprintf(fpat, "%s\n", "0");
					fprintf(fpat, "%s\n", "0");
					fprintf(fpat, "%s\n", "0");
					fprintf(fpat, "%s\n", "0");
					fprintf(fpat, "%s\n", "0");
					fprintf(fpat, "%s\n", "0");
				}else if (strcmp(AL[W].NA, "000") != 0) {
					 fprintf(fpat, "%s\n", AL[W].NA);
					 fprintf(fpat, "%s\n", AL[W].VNA);
					 fprintf(fpat, "%s\n", AL[W].AB);
					 fprintf(fpat, "%s\n", AL[W].MNR);
					 fprintf(fpat, "%s\n", AL[W].FNR);
					 fprintf(fpat, "%s\n", AL[W].mail);
					 fprintf(fpat, "%s\n", AL[W].STR);
					 fprintf(fpat, "%s\n", AL[W].HNR);
					 fprintf(fpat, "%s\n", AL[W].POST);
					 fprintf(fpat, "%s\n", AL[W].ORT);
				 }
				else {
					fprintf(fpat, "%s\n", "000");
					fprintf(fpat, "%s\n", "0");
					fprintf(fpat, "%s\n", "0");
					fprintf(fpat, "%s\n", "0");
					fprintf(fpat, "%s\n", "0");
					fprintf(fpat, "%s\n", "0");
					fprintf(fpat, "%s\n", "0");
					fprintf(fpat, "%s\n", "0");
					fprintf(fpat, "%s\n", "0");
					fprintf(fpat, "%s\n", "0");
				}
			}
		}
	};
	fclose(fpat);
};

void readma(Mitarb *MA) {
	FILE *fpma;
	int I;
	char U[20];
	fpma = fopen("Mitarbeiter.txt", "r");

	for (int i = 0; i < 100; i++) {
		MA[i].NR = 108;
	}

	if (fpma == NULL) {
		printf("Fehler; Datei Mitarbeiter konnte nicht ge%cffnet werden!", 148);
		ENTER();
	}else{
		while (feof(fpma) == 0) {
			fgets(U, 20, fpma);
			strtok(U, "\n");
			I = atoi(U);
			MA[I].NR = I;
			fgets(MA[I].NA, 20, fpma);
			strtok(MA[I].NA, "\n");
			fgets(MA[I].VNA, 20, fpma);
			strtok(MA[I].VNA, "\n");
			fgets(MA[I].EM, 20, fpma);
			strtok(MA[I].EM, "\n");
			fgets(MA[I].EJ, 20, fpma);
			strtok(MA[I].EJ, "\n");
			fgets(MA[I].STR, 20, fpma);
			strtok(MA[I].STR, "\n");
			fgets(MA[I].HNR, 20, fpma);
			strtok(MA[I].HNR, "\n");
			fgets(MA[I].POST, 20, fpma);
			strtok(MA[I].POST, "\n");
			fgets(MA[I].ORT, 20, fpma);
			strtok(MA[I].ORT, "\n");
			fgets(MA[I].MNR, 20, fpma);
			strtok(MA[I].MNR, "\n");
			fgets(MA[I].FNR, 20, fpma);
			strtok(MA[I].FNR, "\n");
			fgets(MA[I].mail, 100, fpma);
			strtok(MA[I].mail, "\n");
			fgets(MA[I].AB, 20, fpma);
			strtok(MA[I].AB, "\n");
			fgets(MA[I].VG, 20, fpma);
			strtok(MA[I].VG, "\n");

		};
	
	}
	fclose(fpma);
};

void readal(ABT *AT, ABL *AL) {
	FILE *fpal;
	int I;
	char U[15];
	fpal = fopen("Abteilung.txt", "r");

	for (int i = 0; i < 100; i++) {
		AT[i].ID = 0;
		strcpy(AT[i].ABL, "nicht besetzt");
	}

	if (fpal == NULL) {
		printf("Fehler; Datei Abteilung konnte nicht ge%cffnet werden!", 148);
		getchar();
	}
	else {
		while(feof(fpal) == 0) {
			fgets(U, 20, fpal);
			strtok(U, "\n");
			I = atoi(U);
			AT[I].ID = I;
			fgets(AT[I].FA, 30, fpal);
			strtok(AT[I].FA, "\n");
			fgets(AT[I].ST, 20, fpal);
			strtok(AT[I].ST, "\n");
			fgets(AT[I].STR, 20, fpal);
			strtok(AT[I].STR, "\n");
			fgets(AT[I].HNR, 20, fpal);
			strtok(AT[I].HNR, "\n");
			fgets(AT[I].POST, 20, fpal);
			strtok(AT[I].POST, "\n");
			fgets(AT[I].ORT, 20, fpal);
			strtok(AT[I].ORT, "\n");
			fgets(AT[I].ABL, 40, fpal);
			strtok(AT[I].ABL, "\n");
			fgets(AL[I].NA, 20, fpal);
			strtok(AL[I].NA, "\n");
			fgets(AL[I].VNA, 20, fpal);
			strtok(AL[I].VNA, "\n");
			fgets(AL[I].AB, 20, fpal);
			strtok(AL[I].AB, "\n");
			fgets(AL[I].MNR, 20, fpal);
			strtok(AL[I].MNR, "\n");
			fgets(AL[I].FNR, 20, fpal);
			strtok(AL[I].FNR, "\n");
			fgets(AL[I].mail, 100, fpal);
			strtok(AL[I].mail, "\n");
			fgets(AL[I].STR, 20, fpal);
			strtok(AL[I].STR, "\n");
			fgets(AL[I].HNR, 20, fpal);
			strtok(AL[I].HNR, "\n");
			fgets(AL[I].POST, 20, fpal);
			strtok(AL[I].POST, "\n");
			fgets(AL[I].ORT, 20, fpal);
			strtok(AL[I].ORT, "\n");

		} ;

	}
	fclose(fpal);
};



void ENTER() {
	int ch;
	while ((ch = fgetc(stdin)) != EOF && ch != '\n');
};
