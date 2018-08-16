#include "Dateneingabe.h"
#include "Daten.h"
#include <cstdlib>
#include <string>


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


void datensatz_laden(char *laden_na, char *laden_vna, char *laden_em, char *laden_ej, char *laden_str, char *laden_hnr, char *laden_post, char *laden_ort, char *laden_mnr, char *laden_fnr,char *laden_mail, char *laden_ab, char *laden_vg, char *laden_nr, int laden_zähler) {

	int zähler = laden_zähler;

	strcpy(laden_na, MA[zähler].NA);
	strcpy(laden_vna, MA[zähler].VNA);
	strcpy(laden_em, MA[zähler].EM);
	strcpy(laden_ej, MA[zähler].EJ);
	strcpy(laden_str, MA[zähler].STR);
	strcpy(laden_hnr, MA[zähler].HNR);
	strcpy(laden_post, MA[zähler].POST);
	strcpy(laden_ort, MA[zähler].ORT);
	strcpy(laden_mnr, MA[zähler].MNR);
	strcpy(laden_fnr, MA[zähler].FNR);
	strcpy(laden_mail, MA[zähler].mail);
	strcpy(laden_ab, MA[zähler].AB);
	strcpy(laden_vg, MA[zähler].VG);

	const char base_string[] = "";
	char out_string[20];
	sprintf(out_string, "%s%d", base_string, MA[zähler].NR);
	strcpy(laden_nr, out_string);
}

void datensatz_speichern(char *speichern_na, char *speichern_vna, char *speichern_em, char *speichern_ej, char *speichern_str, char *speichern_hnr, char *speichern_post, char *speichern_ort, char *speichern_mnr, char *speichern_fnr, char *speichern_mail, char *speichern_ab, char *speichern_vg, char *speichern_nr, int speichern_zähler) {

	int zähler = speichern_zähler;

	strcpy(MA[zähler].NA, speichern_na);
	strcpy(MA[zähler].VNA, speichern_vna);
	strcpy(MA[zähler].EM, speichern_em);
	strcpy(MA[zähler].EJ, speichern_ej);
	strcpy(MA[zähler].STR, speichern_str);
	strcpy(MA[zähler].HNR, speichern_hnr);
	strcpy(MA[zähler].POST, speichern_post);
	strcpy(MA[zähler].ORT, speichern_ort);
	strcpy(MA[zähler].MNR, speichern_mnr);
	strcpy(MA[zähler].FNR, speichern_fnr);
	strcpy(MA[zähler].mail, speichern_mail);
	strcpy(MA[zähler].AB, speichern_ab);
	strcpy(MA[zähler].VG, speichern_vg);
	
	std::string text = speichern_nr;
	int mitarbeiternummer = std::atoi(text.c_str());
	
	MA[zähler].NR = mitarbeiternummer;

}