/*
 ============================================================================
 Name        : Vectores10.c
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
	int vector1[MAX], vector2[MAX];
	int vector3[MAX*2];
	int  tam1, tam2;


	puts("Programa que invierte el contenido del vector");

	do {
		printf("Cuantos elementos quieres (1-%d): ?",MAX);
		fflush(stdout);
		scanf("%d",&tam1);
	} while (tam1<=0 || tam1 >MAX);

	puts("Introduce el vector");
	pedirVector(tam1,vector1);

	do {
		printf("Cuantos elementos quieres para el segundo (1-%d): ?",MAX);
		fflush(stdout);
		scanf("%d",&tam2);
	} while (tam2<=0 || tam2 >MAX);

	puts("Introduce el vector");
	pedirVector(tam2,vector2);

	concatenar(tam1,tam2,vector1,vector2,vector3);



	puts("El vector concatenado es");
	mostrarVector(tam1+tam2,vector3);

}
