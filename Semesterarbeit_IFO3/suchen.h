#pragma once
#include "Daten.h"

typedef struct {
	Mitarb MA;
	int last_pos;
} Mitarb_2;



void setATAL(ABT AT, int AT_id, ABL AL, int AL_id);
ABL getAL(int AL_id);
ABT getAT(int AT_id);
void emptyATAL();
