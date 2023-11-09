/*
 ============================================================================
 Name        : Ejercicio02David.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "vectores.h"

#define MAX 30

int main(void) {
	int vector[MAX];
	int tam;
	int num;

	puts("Programa que muestra los elementos menores que un vector tiene menor a un número dado");

	do {
		printf("Cuantos elementos quieres (1- %d)", MAX);
		fflush(stdout);
		scanf("%d", &tam);
	} while(tam<=0 || tam >MAX);


	puts("introduce el vector:");
	pedirVector(tam,vector);

	printf("Introduce el número a comprobar: ");
	fflush(stdout);
	scanf("%d", &num);
	printf("Los elementos menores que %d son: ", num);
	mostrarMenoresQue(tam,vector,num);


	return EXIT_SUCCESS;
}
