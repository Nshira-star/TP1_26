// This directive deactivates Warnings for unsecure functions that are deprecated by Microsoft.
// This is not a good practice but is used for pedagogic purposes,
// allowing usage of standard C functions as described in manuals.
// You should use only secured functions named with _s postfix
// e.g. printf_s() rather than printf()
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#ifdef _WIN32
#include <conio.h>
#include <Windows.h>
#endif
#include <assert.h>
#include <locale.h>
int main() {

	// LE SUJET COMPLET est disponible sur le dépôt GitHub et se nomme TP1.md
	// Somme des n premiers entiers positifs :
	// Ecrire un programme qui calcule la somme des n premiers entiers positifs, avec n > 1, 
	// en utilisant les trois types de boucles.
	// La valeur de n est fixée dans le programme (prendre 100 pour commencer).
	// Afficher la valeur de n et la somme correspondante.

		// Support des caratères accentués
	const char* locale_name;
	locale_name = setlocale(LC_ALL, "");

#ifdef _WIN32
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	locale_name = setlocale(LC_ALL, "fr-FR");
#endif
	unsigned short int somme = 0;

	unsigned short int n = 100;
	
	// version for
	unsigned short int i;
	for (i = 0; i <= n; i++) {
		somme += i; }
	printf("Somme des %d premiers entiers positifs (version for) : %d\n", n, somme);
	
	// version while do
	somme = 0;
	n = 100;
	while (n > 0) {
		somme += n;
		n--;
	}
	printf("Somme des 100 premiers entiers positifs (version while) : %d\n", somme);

	// version do while
	somme = 0;
	n = 100;
	do { somme += n; n--; } while (n != 0);
	printf("Somme des 100 premiers entiers positifs (version do while) : %d\n", somme);
	
	// Trouver la valeur maximum de n sans dépassement de capacité :
	unsigned short int somme_precedente = 0;
	somme = 0;
	n = 1;
	do {
		somme_precedente = somme;
		somme += n;
		n++;
	} while (somme >= somme_precedente); // S'arrête net dès que somme "chute" après 65535
	// n a été incrémenté une fois de trop juste avant le test
	n = n - 2;
	// La somme est représentée par une variable de type unsigned short int, 
// Quelle est la valeur maximum de n pour que la variable représentant la somme ait une valeur correcte ? 
printf("La valeur maximum de n sans dépassement de capacité : %d (Somme = %hu)\n", n, somme_precedente);

// version for
	// 1. Boucle de validation : on bloque l'utilisateur TANT QUE n n'est pas valide
do {
	printf("Entrez la valeur de n (entre 1 et 361) : ");
	scanf_s("%hu", &n);
} while (n < 1 || n > 361); // On vérifie n AVANT de calculer !


somme = 0;
for (i = 1; i <= n; i++) {
	somme += i; 
}

printf("Somme des %hu premiers entiers positifs (version for) : %hu\n", n, somme);
	return(EXIT_SUCCESS);
}
