/*
 ============================================================================
 Name        : Vectores8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "vectores.h"

int main(void) {
	int vector[MAX];
	int  tam;

	char cadena[MAX*2];

	puts("Programa que comprueba si un vector de digitos es capicua");

	do {
		printf("Cuantos elementos quieres (1-%d): ?",MAX);
		fflush(stdout);
		scanf("%d",&tam);
	} while (tam<=0 || tam >MAX);

	puts("Introduce el vector");
	pedirVector(tam,vector);

	puts("El vector es ");
	mostrarVector(tam, vector);

	if (esCapicua(tam,vector)) {
		puts("El vector es capicua");
	} else {
		puts("El vector no es capicúa");
	}

	puts("Introduce la cadena a comprobar si es palindroma");
	fflush(stdout);
	fflush(stdin);
	gets(cadena);

	if (esPalindromo(cadena)) {
		puts("La cadena es palindroma");
	} else {
		puts("La cadena NO es palindroma");
	}

}
