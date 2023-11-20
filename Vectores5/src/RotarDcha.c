/*
 ============================================================================
 Name        : RotarDcha.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "vectores.h"

#define MAX 300

int main(void) {
	int vector[MAX];
	int tam;



	puts("Introduce un vector por teclado y rotar sus valores a la derecha");

	do {
		printf("Cuantos elementos quieres (1-%d): ?",MAX);
		fflush(stdout);
		scanf("%d",&tam);
	} while (tam<=0 || tam >MAX);

	puts("Intropduce los datos:");
	pedirVector(tam,vector);


	printf("EL vector es ");
	mostrarVectorCorchete(tam,vector);

	puts("\nEl vector rotado es: ");
	rotarDcha(tam,vector);
	mostrarVectorCorchete(tam,vector);

	return EXIT_SUCCESS;
}
