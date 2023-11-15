/*
 ============================================================================
 Name        : Cadenas2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main(void) {

	char nombre[MAX];// = "David";
	char otro[MAX];// = "Luis";

	printf("Introduce una palabra");
	fflush(stdout);
	scanf("%s", nombre);

	printf("Introduce otra palabra");
	fflush(stdout);
	scanf("%s", otro);

//	printf("El nombre es %s", nombre);
//
//	//nombre = "Luis";
//	strcpy(nombre,"Luis");
//	printf("El nombre es %s", nombre);

	if (strcmp(nombre,otro)==0) {
		printf("Los dos nombr %s y %s son igaules",nombre,otro);
	} else if(strcmp(nombre,otro)==-1){
		printf("El primero es menor %s y %s NO son igaules",nombre,otro);
	} else {
		printf("El primero es mayor %s y %s NO son igaules",nombre,otro);
	}




	return EXIT_SUCCESS;
}
