/*
 ============================================================================
 Name        : OrdenarSeleccion.c
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
	int v1[MAX];
	int tam;



	puts("Ordenacion de un vector por selección");
	do {
		printf("Cuantos elementos quieres (1-%d): ?",MAX);
		fflush(stdout);
		scanf("%d",&tam);
	} while (tam<=0 || tam >MAX);

	puts("Introduce el vector");
	pedirVector(tam,v1);


	printf("El vector sin ordenar es: \n");
	mostrarVector(tam,v1);

	ordenarSeleccion(tam,v1);

	printf("El vector ordenado es: \n");
	mostrarVector(tam,v1);


}
