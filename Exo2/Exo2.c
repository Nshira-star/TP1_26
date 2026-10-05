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
	


	return(EXIT_SUCCESS);
}

