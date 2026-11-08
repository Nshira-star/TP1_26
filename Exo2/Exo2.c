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
#ifdef _WIN32
#include <conio.h>
#include <Windows.h>
#endif

// Ecrire un programme nommé Exo2, qui permet à l'utilisateur d'entrer les trois dimensions 
// d'un bagage et vérifie qu'il est éligible à l'embarquement dans la cabine d'un avion 
// puisque sa taille n'excède pas 55 cm x 35 cm x 25 cm.
int main() {
	// Support des caratères accentués
	const char* locale_name;
	locale_name = setlocale(LC_ALL, "");

#ifdef _WIN32
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	locale_name = setlocale(LC_ALL, "fr-FR");
#endif


	float hauteur, largeur, longueur, tmp;
	int reponse;
do {
	printf("\nVERIFICATION DE BAGAGE CABINE\n");
	do { 
		printf("Entrez la hauteur du bagage (en cm) : "); 
		scanf_s("%f", &hauteur);
		} while (hauteur < 1 || hauteur > 150);

	do {
		printf("Entrez la largeur du bagage (en cm) : ");
		scanf_s("%f", &largeur);
	} while (largeur < 1 || largeur > 150);

	do {
		printf("Entrez la longueur du bagage (en cm) : ");
		scanf_s("%f", &longueur);
	} while (longueur < 1 || longueur > 150);

	if (longueur * largeur * hauteur <= 55 * 35 * 25 ) {
		printf("Le bagage est VALIDE pour l'embarquement en cabine.\n");
	}
	else {
		printf("Le bagage est NON VALIDE pour l'embarquement en cabine.\n");
	}
	// Proposer de traiter un autre colis
	printf("\nVoulez-vous verifier un autre bagage ? (1 = Oui, 0 = Non) : ");
	scanf_s("%d", &reponse);

} while (reponse == 1); // Recommence tout si l'utilisateur entre 1

	return(EXIT_SUCCESS);
}

