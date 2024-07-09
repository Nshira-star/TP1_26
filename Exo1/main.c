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


int main() {

	// LE SUJET COMPLET est disponible sur le dépôt GitHub et se nomme TP1.md

	// Somme des n premiers entiers positifs :
	// Ecrire un programme qui calcule la somme des n premiers entiers positifs, avec n > 1, 
	// en utilisant les trois types de boucles.
	// La valeur de n est fixée dans le programme (prendre 100 pour commencer).
	// Afficher la valeur de n et la somme correspondante.

	setlocale(LC_ALL, "fr-FR");

	unsigned short int somme = 0;

	unsigned short int n = 100;
	
	// version for
	

	// version while do
	somme = 0;



	// version do while
	somme = 0;
	

	// Trouver la valeur maximum de n sans dépassement de capacité :
	// La somme est représentée par une variable de type unsigned short int, 
	// Quelle est la valeur maximum de n pour que la variable représentant la somme ait une valeur correcte ? 

	

	return(EXIT_SUCCESS);
}
