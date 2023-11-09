/*
 * vectores.c
 *
 *  Created on: 9 nov 2023
 *      Author: Usuario
 */

#include <stdio.h>

void pedirVector(int tam, int vector[]) {
	int i;

	for(i=0;i<tam;i++) {
		printf("Introduce el elemento %d: ",i+1);
		fflush(stdout);
		scanf("%d", &vector[i]);
	}
}

void mostrarVector(int tam, int vector[]) {
	int i;

	for(i=0;i<tam;i++) {
		printf("%d ", vector[i]);
	}
}

void mostrarVectorCorchete(int tam, int vector[]) {
	int i;
	printf("[");
	for(i=0;i<tam;i++) {
		if (i==tam-1) {
			printf("%d] ", vector[i]);
		} else {
			printf("%d, ", vector[i]);
		}
	}

}

int posicionPrimerElemento(int tam, int vector[], int buscar) {
	int i;
	for(i=0;i<tam;i++) {
		if (vector[i]==buscar) {
			return i;
		}
	}
	return -1;
}

void mostrarMenoresQue(int tam, int vector[], int num) {
	int i;
	for (i=0;i<tam;i++) {
		if (vector[i]<num) {
			printf("%d  ", vector[i]);
		}
	}
}
