/*
 ============================================================================
 Name        : Vectores9.c
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
	int vector[MAX], inv[MAX];
	int  tam;


	puts("Programa que invierte el contenido del vector");

	do {
		printf("Cuantos elementos quieres (1-%d): ?",MAX);
		fflush(stdout);
		scanf("%d",&tam);
	} while (tam<=0 || tam >MAX);

	puts("Introduce el vector");
	pedirVector(tam,vector);

	puts("El vector es ");
	mostrarVector(tam, vector);

	invertir(tam,vector,inv);
	puts("El vector invertido es ");
	mostrarVector(tam,inv);

	puts("El vector sin invertir es ");
	mostrarVector(tam,vector);
	puts("invertiendo vector... El vector es");
	invertir2(tam,vector);
	mostrarVector(tam,vector);

}
