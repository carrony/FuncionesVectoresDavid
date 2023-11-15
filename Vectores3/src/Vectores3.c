/*
 ============================================================================
 Name        : Vectores3.c
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
	float vector[MAX], minimo,maximo;
	int tam;



	puts("Introduce un vector por teclado y muestra los que estan en el intervalo [a,b)");

	do {
		printf("Cuantos elementos quieres (1-%d): ?",MAX);
		fflush(stdout);
		scanf("%d",&tam);
	} while (tam<=0 || tam >MAX);

	puts("Intropduce los datos:");
	pedirVectorReales(tam,vector);

	puts("Introduce el valor inferior del intervalo");
	fflush(stdout);
	scanf("%f", &minimo);

	puts("Introduce el valor superior del intervalo");
	fflush(stdout);
	scanf("%f", &maximo);

	printf("EL vector es ");
	mostrarVectorReales(tam,vector);
	puts("");

	mostrarVectorRealesIntervalo(tam,vector,minimo,maximo);





	return EXIT_SUCCESS;
}
