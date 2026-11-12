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

// Ecrire un programme qui calcule le plus petit multiple commun – ppcm - de trois nombres entiers naturels non nuls.
// Le ppcm est la plus petite valeur entière qui peut être divisée par chacun de ces nombres.
// Le programme doit afficher la valeur du ppcm ainsi que le nombre d'opérations arithmétiques réalisées pour calculer le résultat.
// Comparer cette dernière valeur avec celle obtenue par d'autres étudiants.


	int main(){
		setlocale(LC_ALL, "fr-FR");
		// Support des caratères accentués
		const char* locale_name;
		locale_name = setlocale(LC_ALL, "");

#ifdef _WIN32
		SetConsoleOutputCP(CP_UTF8);
		SetConsoleCP(CP_UTF8);
		locale_name = setlocale(LC_ALL, "fr-FR");
#endif

		// Soit 3 valeurs entières non nulles dont on souhaite calculer le ppcm
		unsigned int valA ;
		unsigned int valB ;
		unsigned int valC ;
		unsigned int ppcm;
		int nbr = 0;


		 do{
			printf("Entrez une première valeur pour le PPCM: %d\n"");
			scanf_s("%u", &valA);
			printf("Entrez une deuxième valeur pour le PPCM: %d\n"");
			scanf_s("%u", &valB);
			printf("Entrez une troisième valeur pour le PPCM: %d\n"");
			scanf_s("%u", &valC);
		} while (valA == 0 || valB == 0 || valC == 0);
		ppcm = valA;
		while (ppcm % valA != 0 || ppcm % valB != 0 || ppcm % valC != 0) {
			nbr++;
			ppcm += valA;
			nbr++;
		};

		printf("PPCM(%d,%d,%d) = %d\n", valA, valB, valC, ppcm);
		printf("Nombre d'opérations : %d\n", nbr);

	return EXIT_SUCCESS;
}
