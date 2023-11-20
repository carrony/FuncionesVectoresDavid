/*
 ============================================================================
 Name        : Vectores6.c
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
	int valor, tam;

	puts("Programa que muestra los valores de un array desde un nuemro mayor a uno dado");

	do {
		printf("Cuantos elementos quieres (1-%d): ?",MAX);
		fflush(stdout);
		scanf("%d",&tam);
	} while (tam<=0 || tam >MAX);

	puts("Introduce el vector");
	pedirVector(tam,vector);

	printf("Itroduce el número a partir del cual queies mostrar: ");
	fflush(stdout);
	scanf("%d", &valor);

	printf("Los valores del vector a partir del valor %d son: \n",valor);
	mostrarDesdeA(tam,vector,valor);


	return EXIT_SUCCESS;
}
