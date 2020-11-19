#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>


#define TAILLETAB 20

int main() {
	char prenom[TAILLETAB];
	char nom[TAILLETAB / 2];
	char sexe[TAILLETAB];
	int lettre;


	printf("Rentrez votre prenom");
	scanf_s("%s", prenom, (unsigned)_countof(prenom));

	printf("\nRentrez votre nom");
	scanf_s("%s", nom, (unsigned)_countof(nom));


	printf("\nRentrez votre sexe sous la forme H pour masculin et F pour feminin");
	do {
		lettre = _getch();
		lettre = toupper(lettre);
	} while ((lettre != 'H') & (lettre != 'F'));

	_putch(lettre);

	switch (lettre) {
	case 'H':
		strcpy(sexe, "Monsieur");
		break;
	case 'F':
		strcpy(sexe, "Madame");
		break;
	}

	printf("\n%s %s %s", sexe, prenom, nom);


	return(EXIT_SUCCESS);
}