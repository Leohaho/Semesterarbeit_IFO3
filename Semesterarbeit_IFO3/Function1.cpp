#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <string.h>
#include "Daten.h"

void Menu1() {
	system("cls");
	system("color 0F");
	printf("W%chlen sie was sie ausf%chren m%cchten.",132,129,148);
	printf("\nDatensatz eingeben:\t--1--");
	printf("\nDatensatz suche:\t--2--");
	printf("\nDaten speichern:\t--3--");
	printf("\nDatensatz l%cschen:\t--4--",148);
	printf("\nDatensatz %cndern:\t--5--",132);
	printf("\nAlle Daten ausgeben:\t--6--");
	printf("\nBeenden:\t\t--x--");
	printf("\nEingabe: ");

};

void dateneingabe(Mitarb *MA,ABL *AL, ABT *AT) {
	char N;
	
	do {
		system("cls");
		system("color 0F");
		printf("W%chlen sie aus welche art Daten sie eingeben m%cchten:",132,148);
		printf("\nAbteilungsleiter:\t--1--");
		printf("\nAbteilung:\t\t--2--");
		printf("\nMitarbeiter:\t\t--3--");
		printf("\nAbbruch:\t\t--x--");
		printf("\nEingabe: ");
		N = getche() - 0;
		switch (N) {
			int P;
			int L;
			int I;
		case '1': eingabeal(L, AL, AT);
			break;
		case '2': eingabeat(I, AT, AL);
			break;
		case '3': eingabema(P, MA, AT);
			break;
		default: if (N != 'x')printf("\n\n--Falsche Eingabe--\n\n");
			break;
			ENTER();
		};
	} while (N != 'x');
};

void datensuche(Mitarb *MA,ABL *AL,ABT *AT) {
	char S[40];
	int M,N,O,J,I;
	char P[40], V1[20], V2[20], V3[20], V4[20], V5[20], V6[40];
	I = 1;
	system("cls");
	system("color 0F");
	printf("Wonach m%cchten sie suchen:", 148);
	fgets(S, 40, stdin);
	Buffer(S);
	strtok(S, "\n");

	for (M = 0; M < 102; M++) {
		if (MA[M].NR == atoi(S)) {
			ausgabema(M, MA);
		}
	}

	strcpy(P, S);
	replace_character(P);
		for (M = 0; M < 102; M++) {
			if (MA[M].NR == M) {
				strcpy(V1, MA[M].NA);
				strcpy(V2, MA[M].VNA);
				strcpy(V3, MA[M].AB);
				replace_character(V1);
				replace_character(V2);
				replace_character(V3);

				if (strcmp(V1, P) == 0) {
					ausgabema(M, MA);
				}
				if (strcmp(V2, P) == 0) {
					ausgabema(M, MA);
				}
				if (strcmp(V3, P) == 0) {
					ausgabema(M, MA);
				}
			}
		}
		for (N = 0; N < 102; N++) {
			if (AT[N].ID == N) {
				if (strcmp(AT[N].ABL, "nicht besetzt") == 0) {

				}
				else if (strcmp(AL[N].NA, "000") != 0) {
					strcpy(V4, AL[N].NA);
					strcpy(V5, AL[N].VNA);
					replace_character(V4);
					replace_character(V5);

					if (strcmp(V4, P) == 0) {
						ausgabeal(N, AL);
					}
					if (strcmp(V5, P) == 0) {
						ausgabeal(N, AL);
					}
				}
			}
			J = N;
		}
		for (O = 0; O < 102; O++) {
			if (AT[O].ID == O) {
				strcpy(V6, AT[O].FA);
				replace_character(V6);

				if (strcmp(V6, P) == 0) {
					ausgabeat(O, AT);
				}
			}
		}



	for (O = 0; O < 102; O++) {
		if (AT[O].ID == atoi(S)) {
			ausgabeat(O, AT);
			N = O;
			ausgabeal(N, AL);
		}
	}

	

	if (M >= 101 && J >= 101 && O >= 101) {
		
		printf("\n\nKeine weiteren Treffer gefunden\nDr%ccken sie Enter zum fortfahren",129);
	}
	ENTER();
};

void datenlöschen(Mitarb *MA, ABL *AL, ABT *AT) {
	char A;
	do {
		system("cls");
		system("color 0F");
		printf("W%chlen sie welche Datensatzart sie l%cschen m%cchten", 132, 148, 148);
		printf("\nAbteilungsleiter:\t--1--");
		printf("\nMitarbeiter:\t\t--2--");
		printf("\nAbbruch:\t\t--x--");
		printf("\nEingabe: ");
		A = getche() - 0;

		switch (A) {
		case '1': loeschenal(AL,AT);
			break;
		case '2': loeschenma(MA);
			break;
		default: if (A != 'x') printf("\n\nFalsche Eingabe\n\n");
			break;
			ENTER();
		}
	} while (A != 'x');
};

void datenändern(Mitarb *MA, ABL *AL, ABT *AT) {
	char N;

	do {
		system("cls");
		system("color 0F");
		printf("W%chlen sie aus welche Art Daten sie %cndern m%cchten", 132, 132, 148);
		printf("\nAbteilungsleiter:\t--1--");
		printf("\nAbteilung:\t\t--2--");
		printf("\nMitarbeiter:\t\t--3--");
		printf("\nAbbruch:\t\t--x--");
		printf("\nEingabe: ");
		N = _getche() - 0;
		switch (N) {
		case '1': andernal(AL, AT, MA);
			break;
		case '2': andernat(MA, AL, AT);
			break;
		case '3': andernma(MA, AT);
			break;
		default: if (N != 'x')printf("\n\n--Falsche Eingabe--\n\n");
			break;
			ENTER();
		};
	} while (N != 'x');
}

void datenausgabe(Mitarb *MA, ABL *AL, ABT *AT) {
	int M, N;

	system("cls");
	system("color 0F");
	printf("Ausgabe aller Daten");
	for (M = 0; M < 101; M++) {
		if (MA[M].NR == M) {
			ausgabema(M, MA);
		}
	}
	for (N = 0; N < 101; N++) {
		if (AT[N].ID == N) {
			if (strcmp(AL[N].NA, "000") != 0) {
				ausgabeal(N, AL);
			}
			ausgabeat(N, AT);
		}
	}
	printf("\n\nAlle vorhandenen Daten ausgegeben\nZum Fortfahren Enter dr%ccken",129);

	ENTER();

};

void eingabema(int P, Mitarb *MA,ABT *AT) {
	char D[100],K[20];		/*Variablen zum erstellen der Mail adresse*/
	char C[10] = ".";
	char E[30] = "@daddeldu.com";
	int Z,Y,B,O;
	char F[20];
	int X;
	do {
		do {
			system("cls");
			system("color 0F");
			printf("Eingabe Mitarbeiter");
			printf("\n\tMitarbeiternummer:");
			fgets(K, 20, stdin);
			strtok(K, "\n");

			for (O = 1; O < 101; O++) {
				if (atoi(K) == O) {
					P = atoi(K);
					if (MA[P].NR == P) {
						system("color 0C");
						printf("\n\nFehler, Nummer bereits belegt\nW%chlen sie eine andere Nummer.", 132);
						printf("\nZum abbrechen --x-- eingeben");
						ENTER();
						break;
					}
					else {
						MA[P].NR = P;
						B = 4;
						break;
					}
				}
			}
			if (strcmp(K, "x") == 0) {
				Y = 6;
				B = 4;
				break;
			}
			if (O >= 101) {
				system("color 0C");
				printf("\nFlasche Eingabe.\nBitte gebe eine Zahl ein");
				printf("\nZum abbrechen --x-- eingeben");
				ENTER();
			}
		} while (B != 4);
		if (Y == 6) {
			break;
		}
		printf("\tName:");
		fgets(MA[P].NA, 20, stdin);
		Buffer(MA[P].NA);
		strtok(MA[P].NA, "\n");			/*strtok befehl um das \n von dem String zu trennen macht es bei der Mail leichter*/
		printf("\tVorname:");
		fgets(MA[P].VNA, 20, stdin);
		Buffer(MA[P].VNA);
		strtok(MA[P].VNA, "\n");
		printf("\tEintritsmonat:");
		fgets(MA[P].EM, 20, stdin);
		Buffer(MA[P].EM);
		strtok(MA[P].EM, "\n");
		printf("\tEintritsjahr:");
		fgets(MA[P].EJ, 20, stdin);
		Buffer(MA[P].EJ);
		strtok(MA[P].EJ, "\n");
		printf("\tStrasse:");
		fgets(MA[P].STR, 20, stdin);
		Buffer(MA[P].STR);
		strtok(MA[P].STR, "\n");
		printf("\tHausnummer:");
		fgets(MA[P].HNR, 20, stdin);
		Buffer(MA[P].HNR);
		strtok(MA[P].HNR, "\n");
		printf("\tPostleitzahl:");
		fgets(MA[P].POST, 20, stdin);
		Buffer(MA[P].POST);
		strtok(MA[P].POST, "\n");
		printf("\tOrt/Stadt:");
		fgets(MA[P].ORT, 20, stdin);
		Buffer(MA[P].ORT);
		strtok(MA[P].ORT, "\n");
		printf("\tMobiltelefonnummer:");
		fgets(MA[P].MNR, 20, stdin);
		Buffer(MA[P].MNR);
		strtok(MA[P].MNR, "\n");
		printf("\tFestnetznummer:");
		fgets(MA[P].FNR, 20, stdin);
		Buffer(MA[P].FNR);
		strtok(MA[P].FNR, "\n");

		do {
			printf("\n\tAbteilung:");
			fgets(F, 20, stdin);
			Buffer(F);
			strtok(F, "\n");

			for (Z = 0; Z < 102; Z++) {
				if (strcmp(F, AT[Z].FA) == 0) {
					strcpy(MA[P].AB, F);
					X = 5;
					strcpy(MA[P].VG, AT[Z].ABL);
					break;
				}
			}
			if (Z > 100) {
				printf("Fehler, Abteilung nicht gefunden! Zum %cberspringen --x-- eingeben!", 129);
			}
			if (strcmp(F, "x") == 0) {
				break;
			}
		} while (X != 5);

		strcpy(D, MA[P].VNA);	/*Vornamen in bearbeitbare Variable kopieren*/
		strcat(D, C);			/* '.' an Variable anhängen*/
		strcat(D, MA[P].NA);	/*Nachnamen an Variable anhängen*/
		strcat(D, E);			/*@daddeldu.com an Variable anhängen*/
		strcpy(MA[P].mail, D);	/*Variable in die Mailadresse kopiren*/
		Y = 6;
	} while (Y != 6);
};

void eingabeal(int L, ABL *AL, ABT *AT) {
	char D[100];		/*Variablen zum erstellen der Mail adresse*/
	char C[10] = ".";
	char E[30] = "@daddeldu.com";
	char F[20];
	char H[20];
	char x[2] = "x";
	int Z,X;
	system("cls");

	do {					
		system("cls");
		system("color 0F");
		printf("Abteilung:");
		fgets(F, 20, stdin);			/*Variable F da Abteilungsleiter ID noch unklar*/
		Buffer(F);
		strtok(F, "\n");

		for (Z = 0; Z < 102; Z++) {
			if (strcmp(F, AT[Z].FA) == 0) {
				L = Z;
				if (strcmp(AT[L].ABL, "nicht besetzt") != 0) {
					system("color 0C");
					printf("\n\nFehler, Abteilungsleiter bereits belegt\nW%chlen sie eine andere Abteilung.", 132);
					printf("\nZum abbrechen geben sie --x-- ein");
					ENTER();
					break;
				}
				else {
					strcpy(AL[L].AB, F);		/*Abteilungsname in Abteilungsleiterdatensatz kopieren*/
					X = 5;
					break;
				}
			}
		}
		if (strcmp(F, x) == 0) {
			X = 6;
			break;
		}else if (Z > 100) {
			system("color 0C");
			printf("Fehler, Abteilung nicht gefunden!\n zum abbrechen --x-- eingeben!\n");
			ENTER();
		}
	} while (X != 5);
	do {
		if (X == 6) {
			break;
		}
		printf("Eingabe Abteilungsleiter");
		printf("\n\tName:");
		fgets(AL[L].NA, 20, stdin);
		Buffer(AL[L].NA);
		strtok(AL[L].NA, "\n");
		printf("\tVorname:");
		fgets(AL[L].VNA, 20, stdin);
		Buffer(AL[L].VNA);
		strtok(AL[L].VNA, "\n");

		strcpy(H, AL[L].VNA);		/*Einfügen des Abteilungsleiter Vor- und Nachnamen in den Abteilungsdatensatz*/
		strcat(H, " ");
		strcat(H, AL[L].NA);
		strcpy(AT[L].ABL, H);


		printf("\tMobiltelefonnummer:");
		fgets(AL[L].MNR, 20, stdin);
		Buffer(AL[L].MNR);
		strtok(AL[L].MNR, "\n");
		printf("\tFestnetznummer:");
		fgets(AL[L].FNR, 20, stdin);
		Buffer(AL[L].FNR);
		strtok(AL[L].FNR, "\n");
		printf("\tStrasse:");
		fgets(AL[L].STR, 20, stdin);
		Buffer(AL[L].STR);
		strtok(AL[L].STR, "\n");
		printf("\tHausnummer:");
		fgets(AL[L].HNR, 20, stdin);
		Buffer(AL[L].HNR);
		strtok(AL[L].HNR, "\n");
		printf("\tPostleitzahl:");
		fgets(AL[L].POST, 20, stdin);
		Buffer(AL[L].POST);
		strtok(AL[L].POST, "\n");
		printf("\tOrt/Stadt:");
		fgets(AL[L].ORT, 20, stdin);
		Buffer(AL[L].ORT);
		strtok(AL[L].ORT, "\n");

		strcpy(D, AL[L].VNA);	/*Vornamen in bearbeitbare Variable kopieren*/
		strcat(D, C);			/* '.' an Variable anhängen*/
		strcat(D, AL[L].NA);	/*Nachnamen an Variable anhängen*/
		strcat(D, E);			/*@daddeldu.com an Variable anhängen*/
		strcpy(AL[L].mail, D);	/*Variable in die Mailadresse kopiren*/
		X = 7;
	} while (X != 7);
};

void eingabeat(int I, ABT *AT, ABL *AL) {
	char D[20];
	int C, T, X;
	T = 5;
	do {
		do {
			system("cls");
			system("color 0F");
			printf("Eingabe Abteilung");
			printf("\n\tAbteilungsID:");
			fgets(D, 20, stdin);
			Buffer(D);
			strtok(D, "\n");
			for (C = 1; C < 101; C++) {
				if (atoi(D) == C) {
					I = atoi(D);
					if (AT[I].ID == I) {
						system("color 0C");
						printf("\n\nFehler, ID bereits belegt\nW%chlen sie eine andere ID.", 132);
						printf("\nZum abbrechen --x-- eingeben");
						ENTER();
						break;
					}
					else {
						AT[I].ID = I;
						T = 4;
						break;
					}
				}
			}
			if (strcmp(D, "x") == 0) {
				X = 6;
				break;
			}
			if (C >= 101) {
				system("color 0C");
				printf("\nFlasche Eingabe.\nBitte gebe eine Zahl ein");
				printf("\nZum abbrechen --x-- eingeben");
				ENTER();
			}
			
		} while (T != 4);
		if (X == 6) {
			break;
		}
		X = 6;
		printf("\tAbteilungsname:");
		fgets(AT[I].FA, 30, stdin);
		Buffer(AT[I].FA);
		strtok(AT[I].FA, "\n");
		printf("\tAbteilungsstandort:");
		fgets(AT[I].ST, 20, stdin);
		Buffer(AT[I].ST);
		strtok(AT[I].ST, "\n");
		printf("Adresse");
		printf("\n\tStrasse:");
		fgets(AT[I].STR, 20, stdin);
		Buffer(AT[I].STR);
		strtok(AT[I].STR, "\n");
		printf("\tHausnummer:");
		fgets(AT[I].HNR, 20, stdin);
		Buffer(AT[I].HNR);
		strtok(AT[I].HNR, "\n");
		printf("\tPostleitzahl:");
		fgets(AT[I].POST, 20, stdin);
		Buffer(AT[I].POST);
		strtok(AT[I].POST, "\n");;
		printf("\tOrt/Stadt:");
		fgets(AT[I].ORT, 20, stdin);
		Buffer(AT[I].ORT);
		strtok(AT[I].ORT, "\n");
		strcpy(AT[I].ABL, "nicht besetzt");
		strcpy(AL[I].NA, "000");
		/*Abteilungsleiter wird über eingabeal eingepflegt*/
	} while (X != 6);
} 

void ausgabema(int M, Mitarb *MA) {
	system("color 0F");
	printf("\n\nAusgabe Mitarbeiter");
	printf("\n\tMitarbeiternummer:%i",MA[M].NR);
	printf("\n\tName:%s", MA[M].NA);
	printf("\n\tVorname:%s",MA[M].VNA);
	printf("\n\tEintritsmonat:%s", MA[M].EM);
	printf("\n\tEintritsjahr:%s", MA[M].EJ);
	printf("\n\tMobiltelefonnummer:%s", MA[M].MNR);
	printf("\n\tFestnetznummer:%s", MA[M].FNR);
	printf("\n\tAbteilung:%s", MA[M].AB);
	printf("\n\tVorgesetzter:%s", MA[M].VG);
	printf("\n\tMailadresse:%s", MA[M].mail);
	printf("\n\tAdresse");
	printf("\n\tStrasse:%s", MA[M].STR);
	printf("\n\tHausnummer:%s", MA[M].HNR);
	printf("\n\tPostleitzahl:%s", MA[M].POST);
	printf("\n\tOrt/Stadt:%s", MA[M].ORT);
};

void ausgabeal(int N, ABL *AL) {
	system("color 0F");
	printf("\n\nAusgabe Abteilungsleiter");
	printf("\n\tName:%s", AL[N].NA);
	printf("\n\tVorname:%s", AL[N].VNA);
	printf("\n\tAbteilung:%s", AL[N].AB);
	printf("\n\tMobiltelefonnummer:%s", AL[N].MNR);
	printf("\n\tFestnetznummer:%s", AL[N].FNR);
	printf("\n\tMailadresse:%s", AL[N].mail);
	printf("\n\tAdresse");
	printf("\n\tStrasse:%s", AL[N].STR);
	printf("\n\tHausnummer:%s", AL[N].HNR);
	printf("\n\tPostleitzahl:%s", AL[N].POST);
	printf("\n\tOrt/Stadt:%s", AL[N].ORT);
};

void ausgabeat(int O, ABT *AT) {
	system("color 0F");
	printf("\n\nAusgabe Abteilung");
	printf("\n\tAbteilungs ID:%i", AT[O].ID);
	printf("\n\tAbteilungsname:%s", AT[O].FA);
	printf("\n\tAbteilungsstandort:%s", AT[O].ST);
	printf("\n\tAbteilungsleiter:%s", AT[O].ABL);
	printf("\n\tAdresse");
	printf("\n\tStrasse:%s", AT[O].STR);
	printf("\n\tHausnummer:%s", AT[O].HNR);
	printf("\n\tPostleitzahl:%s", AT[O].POST);
	printf("\n\tOrt/Stadt:%s", AT[O].ORT);
};

void andernma(Mitarb *MA, ABT *AT) {
	int B,Z,X,Y,T;
	char N,F[20],G[20],V[50];
	do {
		do {
			system("cls");
			system("color 0F");
			printf("W%chlen sie anhand der Mitarbeiternummer,\nwelchen Mitarbeiter sie bearbeiten m%cchten:", 132,148);
			fgets(G, 20, stdin);
			Buffer(G);
			strtok(G, "\n");
			for (T = 0; T < 102; T++) {
				if (MA[T].NR == atoi(G)) {
					Y = 5;
					break;
				}
			}
			if (strcmp(G, "x") == 0) {
				Y = 6;
				break;
			}
			if (T > 100) {
				system("color 0C");
				printf("\n\nKeinen Mitarbeiter gefunden\n\nZum abbrechen --x-- eingeben\n");
				ENTER();
			}
			
		} while (Y != 5);
		if (Y == 6) {
			break;
		}
		B = atoi(G);
		system("cls");
		printf("w%chlen sie was sie %cndern m%cchten", 132, 132, 148);
		printf("\n\tMitarbeiter:%s %s", MA[B].VNA, MA[B].NA);
		printf("\n\tMitarbeiternummer:%i", B);
		printf("\n\tName:\t\t\t--1--");
		printf("\n\tVorname:\t\t--2--");
		printf("\n\tEintritsmonat:\t\t--3--");
		printf("\n\tEintritsjahr:\t\t--4--");
		printf("\n\tMobiltelefonnummer:\t--5--");
		printf("\n\tFestnetznummer:\t\t--6--");
		printf("\n\tAbteilung:\t\t--7--");
		printf("\n\tAdresse:\t\t--8--");
		printf("\nAbbruch:\t\t\t--x--");
		printf("\nEingabe: ");
		N = getche() - 0;

		switch (N) {
		case '1': system("cls"); printf("Geben sie den neuen Namen ein:"); fgets(MA[B].NA, 20, stdin); Buffer(MA[B].NA); strtok(MA[B].NA, "\n");
			strcpy(V, MA[B].VNA); strcat(V, "."); strcat(V, MA[B].NA); strcat(V, "@daddeldu.com"); strcpy(MA[B].mail, V); /*Mail neu generieren*/
			break;
		case '2': system("cls"); printf("Geben sie den neuen Vornamen ein:"); fgets(MA[B].VNA, 20, stdin); Buffer(MA[B].VNA); strtok(MA[B].VNA, "\n");
			strcpy(V, MA[B].VNA); strcat(V, "."); strcat(V, MA[B].NA); strcat(V, "@daddeldu.com"); strcpy(MA[B].mail, V);
			break;
		case '3': system("cls"); printf("Geben sie den neuen Eintritsmonat ein:"); fgets(MA[B].EM, 20, stdin); Buffer(MA[B].EM); strtok(MA[B].EM, "\n");
			break;
		case '4': system("cls"); printf("Geben sie das neuen Eintritsjahr ein:"); fgets(MA[B].EJ, 20, stdin); Buffer(MA[B].EJ); strtok(MA[B].EJ, "\n");
			break;
		case '5': system("cls"); printf("Geben sie die neue Mobiltelefonnummer ein:"); fgets(MA[B].MNR, 20, stdin); Buffer(MA[B].MNR); strtok(MA[B].MNR, "\n");
			break;
		case '6': system("cls"); printf("Geben sie die neue Festnetznummer ein:"); fgets(MA[B].FNR, 20, stdin); Buffer(MA[B].FNR); strtok(MA[B].FNR, "\n");
			break;
		case '7': system("cls"); do {
			printf("Geben sie die neue Abteilung ein:");
			fgets(F, 20, stdin);
			strtok(F, "\n");

			for (Z = 0; Z < 102; Z++) {
				if (strcmp(F, AT[Z].FA) == 0) {
					strcpy(MA[B].AB, F);
					X = 5;
					strcpy(MA[B].VG, AT[Z].ABL);
					break;
				}
			}
			if (Z > 100) {
				printf("Fehler, Abteilung nicht gefunden!\nZum %cberspringen --x-- eingeben!\n", 129);
				ENTER();
			}
			if (strcmp(F, "x") == 0) {
				break;
			}
		} while (X != 5);
			break;
		case '8': system("cls"); printf("Geben sie die neue Strasse ein:"); fgets(MA[B].STR, 20, stdin); Buffer(MA[B].STR); strtok(MA[B].STR, "\n");
			printf("Geben sie die neue Hausnummer ein:"); fgets(MA[B].HNR, 20, stdin); Buffer(MA[B].HNR); strtok(MA[B].HNR, "\n");
			printf("Geben sie die neue Postleitzahl ein:"); fgets(MA[B].POST, 20, stdin); Buffer(MA[B].POST); strtok(MA[B].POST, "\n");
			printf("Geben sie den neuen Ort, bzw. die neue Stadt ein:"); fgets(MA[B].ORT, 20, stdin); Buffer(MA[B].ORT); strtok(MA[B].ORT, "\n");
			break;
		default: if (N != 'x')printf("\n\n--Falsche Eingabe--\n\n");
			break;
			ENTER();
		}
	} while (N != 'x'|| Y == 6);
};

void andernal(ABL *AL,ABT *AT, Mitarb *MA) {
	char N, F[20], W, K[20], U[30], R[50], H[50];
	int Z,L,X,Y,V,M,O;

	do {
		do {
			system("cls");
			system("color 0F");
			printf("W%chlen sie anhand der Abteilung\nwelchen Abteilungsleiter sie bearbeiten m%cchten:", 132, 148);
			fgets(F, 20, stdin);
			Buffer(F);
			strtok(F, "\n");

			for (Z = 0; Z < 102; Z++) {
				if (strcmp(F, AT[Z].FA) == 0) {
					L = Z;
					X = 5;
					break;
				}
			}
			if (strcmp(F, "x") == 0) {
				X = 6;
				break;
			}
			if (Z > 100) {
				system("color 0C");
				printf("Fehler, Abteilung nicht gefunden!\n zum abbrechen --x-- eingeben!\n");
				ENTER();
			}
		} while (X != 5);
		if (X == 6) {break;}
		if (strcmp(AL[L].NA, "000") != 0) {
			system("cls");
			printf("w%chlen sie was sie %cndern m%cchten", 132, 132, 148);
			printf("\n\tAbteilungsleiter:%s", AT[L].ABL);
			printf("\n\tName:\t\t\t--1--");
			printf("\n\tVorname:\t\t--2--");
			printf("\n\tMobiltelefonnummer:\t--3-");
			printf("\n\tFestnetznummer:\t\t--4--");
			printf("\n\tAbteilung:\t\t--5--");
			printf("\n\tAdresse:\t\t--6--");
			printf("\nAbbruch:\t\t\t--x--");
			printf("\nEingabe: ");
			N = getche() - 0;

			switch (N) {
			case '1': system("cls"); printf("Geben sie den neuen Namen ein:"); fgets(AL[L].NA, 20, stdin); Buffer(AL[L].NA); strtok(AL[L].NA, "\n");
				strcpy(R, AL[L].VNA); strcat(R, "."); strcat(R, AL[L].NA); strcat(R, "@daddeldu.com"); strcpy(AL[L].mail, R);
				for (O = 0; O < 101; O++) {
					if (strcmp(MA[O].AB, AT[L].FA) == 0) {
						strcpy(H, AL[L].VNA);	
						strcat(H, " ");
						strcat(H, AL[L].NA);
						strcpy(AT[L].ABL, H);
						strcpy(MA[O].VG, H);
					}
				}
				break;
			case '2': system("cls"); printf("Geben sie den neuen Vornamen ein:"); fgets(AL[L].VNA, 20, stdin); Buffer(AL[L].VNA); strtok(AL[L].VNA, "\n");
				strcpy(R, AL[L].VNA); strcat(R, "."); strcat(R, AL[L].NA); strcat(R, "@daddeldu.com"); strcpy(AL[L].mail, R);
				for (O = 0; O < 101; O++) {
					if (strcmp(MA[O].AB, AT[L].FA) == 0) {
						strcpy(H, AL[L].VNA);
						strcat(H, " ");
						strcat(H, AL[L].NA);
						strcpy(AT[L].ABL, H);
						strcpy(MA[O].VG, H);
					}
				}
				break;
			case '3': system("cls"); printf("Geben sie die neue Mobiltelefonnummer ein:"); fgets(AL[L].MNR, 20, stdin); Buffer(AL[L].MNR); strtok(AL[L].MNR, "\n");
				break;
			case '4': system("cls"); printf("Geben sie die neue Festnetznummer ein:"); fgets(AL[L].FNR, 20, stdin); Buffer(AL[L].FNR); strtok(AL[L].FNR, "\n");
				break;
			case '5': do {
				system("cls"); printf("Bei %cnderung der Abteilung wird der vorherige Abteilungsleiter der neuen Abteilung %cberschrieben!", 132, 129);
				printf("Fortsetzen? j oder n");
				W = getche();
				switch (W) {
				case 'j':do {
					printf("Geben sie die neue Abteilung ein:");
					fgets(K, 20, stdin);
					strtok(K, "\n");

					for (V = 0; V < 102; V++) {
						if (strcmp(K, AT[V].FA) == 0) {
							M = V;
							Y = 5;
							strcpy(AL[M].NA, AL[L].NA);
							strcpy(AL[M].VNA, AL[L].VNA);
							strcpy(AL[M].STR, AL[L].STR);
							strcpy(AL[M].ORT, AL[L].ORT);
							strcpy(AL[M].mail, AL[L].mail);
							strcpy(AL[M].MNR, AL[L].MNR);
							strcpy(AL[M].FNR, AL[L].FNR);
							strcpy(AL[M].HNR, AL[L].HNR);
							strcpy(AL[M].POST, AL[L].POST);
							strcpy(U, AL[M].VNA); strcat(U, " "); strcat(U, AL[M].NA);
							strcpy(AT[M].ABL, U);
							printf("\nDaten %cberschrieben", 148);
							break;
						}
					}
					if (Z > 100) {
						printf("Fehler, Abteilung nicht gefunden!\nZum Abbrechen --x-- eingeben!\n");
						ENTER();
					}
					if (strcmp(K, "x") == 0) {
						Y = 6;
						break;
					}
				} while (Y != 5);

				break;
				default: if (W != 'n')printf("\n\nFalsche Eingabe\n\n");
					break;
				}
			} while (W != 'n');
			break;
			case '6': system("cls"); printf("Geben sie die neue Strasse ein:"); fgets(AL[L].STR, 20, stdin); Buffer(AL[L].STR); strtok(AL[L].STR, "\n");
				printf("Geben sie die neue Hausnummer ein:"); fgets(AL[L].HNR, 20, stdin); Buffer(AL[L].HNR); strtok(AL[L].HNR, "\n");
				printf("Geben sie die neue Postleitzahl ein:"); fgets(AL[L].POST, 20, stdin); Buffer(AL[L].POST); strtok(AL[L].POST, "\n");
				printf("Geben sie den neuen Ort, bzw. die neue Stadt ein:"); fgets(AL[L].ORT, 20, stdin); Buffer(AL[L].ORT); strtok(AL[L].ORT, "\n");
				break;
			default: if (N != 'x')printf("\n\n--Falsche Eingabe--\n\n");
				break;
				ENTER();
			}
		}
		else {
			system("cls");
			printf("Kein Abteilungsleiter in dieser Abteilung vorhanden.\nGeben sie zuerst einen Abteilungsleiter ein.");
			ENTER();
			N = 'x';
		}
	} while (N != 'x');
};

void andernat(Mitarb *MA, ABL *AL, ABT *AT) {
	int X,T,U;
	char H[20],N,O[20];
	do {
		do {
			system("cls");
			system("color 0F");
			printf("W%chlen sie anhand der Abteilungs ID,\nwelche Abteilung sie bearbeiten m%chten", 132, 148);
			printf("\nEingabe Abteilungs ID: ");
			fgets(H, 20, stdin);
			Buffer(H);
			strtok(H, "\n");
			for (T = 0; T < 102; T++) {
				if (AT[T].ID == atoi(H)) {
					X = 5;
					break;
				}
			}
			if (strcmp(H, "x") == 0) {
				X = 6;
				break;
			}
			if (T > 100) {
				system("color 0c");
				printf("\n\nKeine Abteilung gefunden\n\nZum abbrechen --x-- eingeben\n");
				ENTER();
			}
		} while (X != 5);
		if (X == 6) {
			break;
		}
		system("cls");
		U = atoi(H);
		printf("w%chlen sie was sie %cndern m%cchten", 132, 132, 148);
		printf("\n\tAbteilung:%s",AT[U].FA);
		printf("\n\tAbteilungs ID: %i", atoi(H));
		printf("\n\tName:\t\t--1--");
		printf("\n\tStandort:\t--2--");
		printf("\n\tAdresse:\t--3--");
		printf("\nAbbruch:\t\t--x--");
		printf("\nEingabe: ");
		N = getche() - 0;

		switch (N) {
		case '1': system("cls"); printf("Geben sie den neuen Namen ein:"); strcpy(O, AT[U].FA); fgets(AT[U].FA, 30, stdin); Buffer(AT[U].FA); strtok(AT[U].FA, "\n"); strcpy(AL[U].AB, AT[U].FA);
			for (int G = 0; G < 102; G++) {
				if (strcmp(MA[G].AB, O) == 0) {
					strcpy(MA[G].AB, AT[U].FA);
				}
			}
			break;
		case '2': system("cls"); printf("Geben sie den neuen Standort ein:"); fgets(AT[U].ST, 20, stdin); Buffer(AT[U].ST); strtok(AT[U].ST, "\n");
			break;
		case '3': system("cls"); printf("Geben sie die neue Strasse ein:"); fgets(AT[U].STR, 20, stdin); Buffer(AT[U].STR); strtok(AT[U].STR, "\n");
			printf("Geben sie die neue Hausnummer ein:"); fgets(AT[U].HNR, 20, stdin); Buffer(AT[U].HNR); strtok(AT[U].HNR, "\n");
			printf("Geben sie die neue Postleitzahl ein:"); fgets(AT[U].POST, 20, stdin); Buffer(AT[U].POST); strtok(AT[U].POST, "\n");
			printf("Geben sie den neuen Ort, bzw. die neue Stadt ein:"); fgets(AT[U].ORT, 20, stdin); Buffer(AT[U].ORT); strtok(AT[U].ORT, "\n");
			break;
		default: if (N != 'x')printf("\n\n--Falsche Eingabe--\n\n");
			break;
			ENTER();
		}

	} while (N != 'x' || X == 6);
};

void loeschenma(Mitarb *MA) {
	char G[20],N;
	int T,Y,B,P;
	
	P = 2;
		do {
			system("cls");
			system("color 0F");
			printf("W%chlen sie anhand der Mitarbeiternummer,\nwelchen Mitarbeiter sie l%cschen m%cchten:", 132, 148, 148);
			fgets(G, 20, stdin);
			Buffer(G);
			strtok(G, "\n");
			for (T = 0; T < 102; T++) {
				if (MA[T].NR == atoi(G)) {
					Y = 5;
					B = atoi(G);
					printf("\nSind sie sich sicher das sie den Mitarbeiter:\n%s %s\nl%cschen m%cchten?\n", MA[B].VNA, MA[B].NA, 148, 148);
					printf("W%chlen sie --j-- f%cr ja\nOder --n-- f%cr nein:\n", 132, 129, 129);
					N = getche();

					if (N == 'j') {
						MA[B].NR = 108;
					}
					break;
				}
			}
			if (strcmp(G, "x") == 0) {
				Y = 6;
				break;
			}
			if (T > 100) {
				system("cls");
				system("color 0C");
				printf("Keinen Mitarbeiter gefunden\n\nZum abbrechen --x-- eingeben\n");
				ENTER();
			}
		} while (Y != 5);

};

void loeschenal(ABL *AL, ABT *AT) {

	char G[20], N;
	int T, Y, B, P;

	P = 2;
	do {
		system("cls");
		system("color 0F");
		printf("W%chlen sie anhand der Abteilungs ID,\nwelchen Abteilungsleiter sie l%cschen m%cchten:", 132, 148, 148);
		fgets(G, 20, stdin);
		Buffer(G);
		strtok(G, "\n");
		for (T = 0; T < 102; T++) {
			if (AT[T].ID == atoi(G)) {
				Y = 5;
				B = atoi(G);
				printf("\nSind sie sich sicher das sie den Abteilungsleiter:\n%s %s\nl%cschen m%cchten?\n", AL[B].VNA, AL[B].NA, 148, 148);
				printf("W%chlen sie --j-- f%cr ja\nOder --n-- f%cr nein:\n", 132, 129, 129);
				N = getche();

				if (N == 'j') {
					strcpy(AL[B].NA, "000"); 
					strcpy(AT[B].ABL, "nicht besetzt");
				}
				break;
			}
		}
		if (strcmp(G, "x") == 0) {
			Y = 6;
			break;
		}
		if (T > 100) {
			system("cls");
			system("color 0C");
			printf("Keinen Abteilungsleiter gefunden\n\nZum abbrechen --x-- eingeben\n");
			ENTER();
		}
	} while (Y != 5);
};

void speichernma(Mitarb *MA) {
	FILE *fpma;
	int Z; 


	fpma = fopen("Mitarbeiter.txt", "w");
	if (fpma == NULL) {
		printf("Datei konnte nicht ge%cffnet werden", 148);
	}else {
		
		for (Z = 0; Z < 102; Z++) {
			
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

		for (W = 0; W < 102; W++) {
			
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

void replace_character(char* string) {
	int x,i;
	for (i = 0; string[i] != '\0'; i++) {
		for (x = 0; x < 27; x++) {
			if (string[i] == 65 + x) {
				string[i] = string[i] + 32;
			}
		}
	}
}

void Buffer(char* string) {
	size_t len = strlen(string);
	if (string[len - 1] == '\n') {
	}
	else {
		int ch;
		while ((ch = fgetc(stdin)) != EOF && ch != '\n');
	}
}

void ENTER() {
	int ch;
	while ((ch = fgetc(stdin)) != EOF && ch != '\n');
};

void Save_abfrage(int save,ABT *AT, ABL *AL,Mitarb *MA) {
	char auswahl2;
	while (save != 1) {
		system("cls");
		system("color 0F");
		printf("Wollen sie speichern?");
		printf("\nW%chlen sie", 132);
		printf("\nf%cr ja:\t--j--", 129);
		printf("\nf%cr nein:\t--n--", 129);
		printf("\nEingabe:");
		auswahl2 = getche();
		ENTER();
		if (auswahl2 == 'j') {
			speichernma(MA); speichernal(AT, AL);
			break;
		}
		else if (auswahl2 == 'n') {
			break;
		}
		else {
			system("color 0C");
			printf("\n--Falsche Eingabe--");
			ENTER();
		}
	}
}