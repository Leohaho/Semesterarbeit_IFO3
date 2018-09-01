#include "Datenausgabe.h"
#include "Daten.h"

#include<cstring>
#include<string.h>

static Mitarb MA[100];
static ABL AL[100];
static ABT AT[100];

void read_ausgabe() {
	readal(AT, AL);
	readma(MA);
}

char* ausgeben2(int i) {
	char* text;
	std::string add ="";
	
	switch (i)
	{
	case 1: {
	for (int M = 0; M < 100; M++) {
		if (MA[M].NR != 108 && MA[M].NR != 0) {
			std::string NR(std::to_string(MA[M].NR));
			std::string NA(MA[M].NA);
			std::string VNA(MA[M].VNA);
			std::string EM(MA[M].EM);
			std::string EJ(MA[M].EJ);
			std::string MNR(MA[M].MNR);
			std::string FNR(MA[M].FNR);
			std::string AB(MA[M].AB);
			std::string VG(MA[M].VG);
			std::string mail(MA[M].mail);
			std::string STR(MA[M].STR);
			std::string HNR(MA[M].HNR);
			std::string POST(MA[M].POST);
			std::string ORT(MA[M].ORT);

			add += NR + "§" + NA + "§" + VNA + "§" + EM + "§" + EJ + "§" + MNR + "§" + FNR + "§" 
				+ AB + "§" + VG + "§" + mail + "§" + STR + "§" + HNR + "§" + POST + "§"+ ORT + "§";
		}
	} 
	text = strdup(add.c_str());
	break;
	}
	case 2: {
		for (int N = 0; N < 102; N++) {

			if (strcmp(AT[N].ABL, "nicht besetzt") != 0) {

				std::string NA(AL[N].NA);
				std::string VNA(AL[N].VNA);
				std::string AB(AL[N].AB);
				std::string MNR(AL[N].MNR);
				std::string FNR(AL[N].FNR);
				std::string mail(AL[N].mail);
				std::string STR(AL[N].STR);
				std::string HNR(AL[N].HNR);
				std::string POST(AL[N].POST);
				std::string ORT(AL[N].ORT);

				add += NA + "§" + VNA + "§" + AB + "§" + MNR + "§" + FNR + "§" + mail + "§" + STR + "§" + HNR + "§" + POST + "§" + ORT + "§";
			}
		}
		text = strdup(add.c_str());
		break;
	}
	case 3: {
		for (int N = 0; N < 102; N++) {
			if (AT[N].ID != 0) {
				std::string ID(std::to_string(AT[N].ID));
				std::string FA(AT[N].FA);
				std::string ST(AT[N].ST);
				std::string ABL(AT[N].ABL);
				std::string STR(AT[N].STR);
				std::string HNR(AT[N].HNR);
				std::string POST(AT[N].POST);
				std::string ORT(AT[N].ORT);
				add += ID + "§" + FA + "§" + ST + "§" + ABL + "§" + STR + "§" + HNR + "§" + POST + "§" + ORT + "§";
			}
		}
		text = strdup(add.c_str());
		break;
	}
	default:
		break;
	}
	return text;
}

