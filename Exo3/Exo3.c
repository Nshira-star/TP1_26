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



	
	return(EXIT_SUCCESS);
}

