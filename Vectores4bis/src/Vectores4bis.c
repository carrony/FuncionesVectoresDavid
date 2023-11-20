/*
 ============================================================================
 Name        : Vectores4bis.c
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
	int i;

	int vueltas;


	puts("Introduce un vector por teclado y rotar sus valores a la izquierda");

	do {
		printf("Cuantos elementos quieres (1-%d): ?",MAX);
		fflush(stdout);
		scanf("%d",&tam);
	} while (tam<=0 || tam >MAX);

	puts("Intropduce los datos:");
	pedirVector(tam,vector);


	printf("Cuantos vueltas quieres a la izquierda: ?");
	fflush(stdout);
	scanf("%d",&vueltas);

	printf("EL vector es ");
	mostrarVectorCorchete(tam,vector);

	puts("Rotando ....");
	for(i=0; i< vueltas; i++) {
		rotarIzq(tam,vector);
	}

	printf("EL vector rotado %d posiciones a la izquierda es \n",vueltas);
		mostrarVectorCorchete(tam,vector);


	return EXIT_SUCCESS;
}
