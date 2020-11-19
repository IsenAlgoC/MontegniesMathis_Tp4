#include <stdlib.h>
#include <stdio.h>
#include "tp4.h"

int main() {
	HEURE HeureDebut = { 12,30 };
	HEURE HeureFin;
	HEURE Duree = { 0,45 };

	HeureFin.heure = HeureDebut.heure + (int)((HeureDebut.minute + Duree.minute) / 60);
	HeureFin.minute = (HeureDebut.minute + Duree.minute) % 60;

	printf("HeureDebut : %d:%d\n", HeureDebut);
	printf("Durée : %d:%d\n", Duree);
	printf("HeureFin : %d:%d", HeureFin);
}