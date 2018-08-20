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

void datensatz_laden_mitarbeiter(char *laden_na, char *laden_vna, char *laden_em, char *laden_ej, char *laden_str, char *laden_hnr, char *laden_post, char *laden_ort, char *laden_mnr, char *laden_fnr,char *laden_mail, char *laden_ab, char *laden_vg, char *laden_nr, int laden_z�hler) {

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

void datensatz_speichern_mitarbeiter(char *speichern_na, char *speichern_vna, char *speichern_em, char *speichern_ej, char *speichern_str, char *speichern_hnr, char *speichern_post, char *speichern_ort, char *speichern_mnr, char *speichern_fnr, char *speichern_mail, char *speichern_ab, char *speichern_vg, char *speichern_nr, int speichern_z�hler) {

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
	MA[z�hler].NR = z�hler;
}

void datensatz_laden_abteilung(char *laden_na, char *laden_str, char *laden_hnr, char *laden_post, char *laden_ort, char *laden_abl, char *laden_nr, char *laden_st, int laden_z�hler) {

	int z�hler = laden_z�hler;

	strcpy(laden_na, AT[z�hler].FA);
	strcpy(laden_str, AT[z�hler].STR);
	strcpy(laden_hnr, AT[z�hler].HNR);
	strcpy(laden_post, AT[z�hler].POST);
	strcpy(laden_ort, AT[z�hler].ORT);
	strcpy(laden_abl, AT[z�hler].ABL);
	strcpy(laden_st, AT[z�hler].ST);
	
	const char base_string[] = "";
	char out_string[20];
	sprintf(out_string, "%s%d", base_string, AT[z�hler].ID);
	strcpy(laden_nr, out_string);
}

void datensatz_speichern_abteilung(char *speichern_str, char *speichern_hnr, char *speichern_post, char *speichern_ort, char *speichern_ab, char *speichern_id, char *speichern_abl, char *speichern_st, int speichern_z�hler) {

	int z�hler = speichern_z�hler;

	strcpy(AT[z�hler].STR, speichern_str);
	strcpy(AT[z�hler].HNR, speichern_hnr);
	strcpy(AT[z�hler].POST, speichern_post);
	strcpy(AT[z�hler].ORT, speichern_ort);
	strcpy(AT[z�hler].FA, speichern_ab);
	strcpy(AT[z�hler].ABL, speichern_abl);
	strcpy(AT[z�hler].ST, speichern_st);
	AT[z�hler].ID = z�hler;

}

void datensatz_laden_abteilungsleiter(char *laden_na, char *laden_vna, char *laden_str, char *laden_hnr, char *laden_post, char *laden_ort, char *laden_mnr, char *laden_fnr, char *laden_mail, char *laden_ab, int laden_z�hler, char *laden_atid, char *laden_atfa, char *laden_atabl) {

	int z�hler = laden_z�hler;

	strcpy(laden_na, AL[z�hler].NA);
	strcpy(laden_vna, AL[z�hler].VNA);
	strcpy(laden_str, AL[z�hler].STR);
	strcpy(laden_hnr, AL[z�hler].HNR);
	strcpy(laden_post, AL[z�hler].POST);
	strcpy(laden_ort, AL[z�hler].ORT);
	strcpy(laden_mnr, AL[z�hler].MNR);
	strcpy(laden_fnr, AL[z�hler].FNR);
	strcpy(laden_mail, AL[z�hler].mail);
	strcpy(laden_ab, AL[z�hler].AB);
	strcpy(laden_atfa, AT[z�hler].FA);
	strcpy(laden_atabl, AT[z�hler].ABL);

	const char base_string[] = "";
	char out_string[20];
	sprintf(out_string, "%s%d", base_string, AT[z�hler].ID);
	strcpy(laden_atid, out_string);
}

void datensatz_speichern_abteilungsleiter(char *speichern_na, char *speichern_vna, char *speichern_str, char *speichern_hnr, char *speichern_post, char *speichern_ort, char *speichern_mnr, char *speichern_fnr, char *speichern_mail, char *speichern_ab, char *speichern_abl, int speichern_z�hler) {

	int z�hler = speichern_z�hler;

	strcpy(AL[z�hler].NA, speichern_na);
	strcpy(AL[z�hler].VNA, speichern_vna);
	strcpy(AL[z�hler].STR, speichern_str);
	strcpy(AL[z�hler].HNR, speichern_hnr);
	strcpy(AL[z�hler].POST, speichern_post);
	strcpy(AL[z�hler].ORT, speichern_ort);
	strcpy(AL[z�hler].MNR, speichern_mnr);
	strcpy(AL[z�hler].FNR, speichern_fnr);
	strcpy(AL[z�hler].mail, speichern_mail);
	strcpy(AL[z�hler].AB, speichern_ab);
	strcpy(AT[z�hler].ABL, speichern_abl);
	
}