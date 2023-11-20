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

void pedirVectorReales(int tam, float vector[]) {
	int i;

	for(i=0;i<tam;i++) {
		printf("Introduce el elemento %d: ",i+1);
		fflush(stdout);
		scanf("%f", &vector[i]);
	}
}

void mostrarVector(int tam, int vector[]) {
	int i;

	for(i=0;i<tam;i++) {
		printf("%d ", vector[i]);
	}
}

void mostrarVectorReales(int tam, float vector[]) {
	int i;

	for(i=0;i<tam;i++) {
		printf("%.2f ", vector[i]);
	}
}

void mostrarVectorRealesIntervalo(int tam, float vector[],
		                         float minimo, float maximo) {
	int i;

	for(i=0;i<tam;i++) {
		if(vector[i] >= minimo && vector[i]<maximo) {
			printf("%.2f ", vector[i]);

		}
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

void rotarIzq(int tam, int vector[]){
	int aux;
	int i;

	aux=vector[0];
	for(i=0; i<tam-1;i++) {
		vector[i]=vector[i+1];
	}
	vector[tam-1]=aux;

}

//void rotarIzq(int tam, int vector[]){
//	int aux;
//	int i;
//
//	aux=vector[0];
//	for(i=1; i<tam;i++) {
//		vector[i-1]=vector[i];
//	}
//	vector[tam-1]=aux;
//
//}

void rotarDcha(int tam, int vector[]){
	int aux;
	int i;

	aux=vector[tam-1];
	for(i=tam-1; i>0;i--) {
		vector[i]=vector[i-1];
	}
	vector[0]=aux;
}

void mostrarDesdeA(int tam, int vector[], int a) {
	int i,j;

	for(i=0;i<tam && vector[i]<=a;i++);

	for (j=i;j<tam;j++) {
		printf("%d ",vector[j]);
	}

}


void mostrarDesdeAv2(int tam, int vector[], int a) {
	int i, posicion=0;

	for(i=0;i<tam;i++) {
		if(vector[i]>a) {
			posicion++;
		}
		if (posicion>0) {
			printf("%d ",vector[i]);
		}
	}
}


