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


void datensatz_laden(char *laden_na, char *laden_vna, char *laden_em, char *laden_ej, char *laden_str, char *laden_hnr, char *laden_post, char *laden_ort, char *laden_mnr, char *laden_fnr,char *laden_mail, char *laden_ab, char *laden_vg, char *laden_nr, int laden_z�hler) {

	int z�hler = laden_z�hler;

	strcpy(laden_na, MA[z�hler].NA);
	strcpy(laden_vna, MA[z�hler].VNA);
	strcpy(laden_em, MA[z�hler].EM);
	strcpy(laden_ej, MA[z�hler].EJ);
	strcpy(laden_str, MA[z�hler].STR);
	strcpy(laden_hnr, MA[z�hler].HNR);
	strcpy(laden_post, MA[z�hler].POST);
	strcpy(laden_ort, MA[z�hler].ORT);
	strcpy(laden_mnr, MA[z�hler].MNR);
	strcpy(laden_fnr, MA[z�hler].FNR);
	strcpy(laden_mail, MA[z�hler].mail);
	strcpy(laden_ab, MA[z�hler].AB);
	strcpy(laden_vg, MA[z�hler].VG);

	const char base_string[] = "";
	char out_string[20];
	sprintf(out_string, "%s%d", base_string, MA[z�hler].NR);
	strcpy(laden_nr, out_string);
}

void datensatz_speichern(char *speichern_na, char *speichern_vna, char *speichern_em, char *speichern_ej, char *speichern_str, char *speichern_hnr, char *speichern_post, char *speichern_ort, char *speichern_mnr, char *speichern_fnr, char *speichern_mail, char *speichern_ab, char *speichern_vg, char *speichern_nr, int speichern_z�hler) {

	int z�hler = speichern_z�hler;

	strcpy(MA[z�hler].NA, speichern_na);
	strcpy(MA[z�hler].VNA, speichern_vna);
	strcpy(MA[z�hler].EM, speichern_em);
	strcpy(MA[z�hler].EJ, speichern_ej);
	strcpy(MA[z�hler].STR, speichern_str);
	strcpy(MA[z�hler].HNR, speichern_hnr);
	strcpy(MA[z�hler].POST, speichern_post);
	strcpy(MA[z�hler].ORT, speichern_ort);
	strcpy(MA[z�hler].MNR, speichern_mnr);
	strcpy(MA[z�hler].FNR, speichern_fnr);
	strcpy(MA[z�hler].mail, speichern_mail);
	strcpy(MA[z�hler].AB, speichern_ab);
	strcpy(MA[z�hler].VG, speichern_vg);
	
	std::string text = speichern_nr;
	int mitarbeiternummer = std::atoi(text.c_str());
	
	MA[z�hler].NR = mitarbeiternummer;

}