/*
 ============================================================================
 Name        : ProdEscalar.c
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
	float v1[MAX], v2[MAX];
	int tam;



	puts("Calculo del producto escalar de dos vectores");
	do {
		printf("Cuantos elementos quieres (1-%d): ?",MAX);
		fflush(stdout);
		scanf("%d",&tam);
	} while (tam<=0 || tam >MAX);

	puts("Introduce el vector 1");
	pedirVectorReales(tam,v1);

	puts("Introduce el vector 2");
	pedirVectorReales(tam,v2);

	printf("Loas vectores son: \n");
	mostrarVectorReales(tam,v1);
	printf("\n");
	mostrarVectorReales(tam,v2);


	printf("El producto escalar de los vectores es %.2f", productoEscalar(tam,v1,v2));

	if (sonPerpendiculares(tam,v1,v2)) {
		printf("Son perpendiculares");
	} else {
		printf("NO Son perpendiculares");
	}


	return EXIT_SUCCESS;
}
