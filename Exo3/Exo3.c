// This directive deactivates Warnings for unsecure functions that are deprecated by Microsoft.
// This is not a good practice but is used for pedagogic purposes,
// allowing usage of standard C functions as described in manuals.
// You should use only secured functions named with _s postfix
// e.g. printf_s() rather than printf()
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <limits.h>
#include <time.h>
#ifdef _WIN32
#include <conio.h>
#include <Windows.h>
#endif

int main() {

	// Support des caratères accentués
	const char* locale_name;
	locale_name = setlocale(LC_ALL, "");

#ifdef _WIN32
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	locale_name = setlocale(LC_ALL, "fr-FR");
#endif

	int trouve = false;
	int nb_essais = 0;
	int valeur;
	int nbSecret;

	// Seed the random-number generator with the current time so that
	// the numbers will be different every time we run.
	srand((unsigned)time(NULL));
	int reponse; int MAXI; int MINI; 

	do {
		trouve = false; // Réinitialisation

		printf("Votre nombre est contenu entre...");
		scanf_s("%d", &MINI);
		printf("et...");
		scanf_s("%d", &MAXI);
		nbSecret = (rand() % (MAXI - MINI + 1)) + MINI; // Génère un nombre aléatoire entre min et max
		while (!trouve) {
			printf("Rentrer votre valeur entre : ");
			scanf_s("%d", &valeur);
			nb_essais++;

			if (valeur == nbSecret) {
				trouve = TRUE;
				printf("Gagné ! Vous avez trouvé le nombre secret !\n");
			}
			else {
				trouve = FALSE;
				printf("Vous etes nul!, Redevinez\n");
			};
				
		} 

		printf("\nVoulez-vous rejouer? (1 = Oui, 0 = Non) : ");
		scanf_s("%d", &reponse);

	} while (reponse == 1); // Recommence tout si l'utilisateur entre 1

	printf("\nVoici vos stats : Vous avez tenté %d fois, le nombre secret était %d, entre %d et %d", nb_essais, nbSecret, MINI, MAXI); // nbSecret est initialisé par la génération aléatoire

	
	return(EXIT_SUCCESS);
}

