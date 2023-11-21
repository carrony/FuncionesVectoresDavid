/*
 ============================================================================
 Name        : Vectores11.c
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
	int vector1[MAX], vector2[MAX], vector3[MAX];
	int  tam;


	puts("Programa que suma dos vectores");

	do {
		printf("Cuantos elementos quieres (1-%d): ?",MAX);
		fflush(stdout);
		scanf("%d",&tam);
	} while (tam<=0 || tam >MAX);

	puts("Introduce el vector 1");
	pedirVector(tam,vector1);

	puts("Introduce el vector");
	pedirVector(tam,vector2);

	sumaVectores(tam,vector1, vector2, vector3);

	puts("La suma de los vectores es ");
	mostrarVector(tam, vector3);


}
