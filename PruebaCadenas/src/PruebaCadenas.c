/*
 ============================================================================
 Name        : PruebaCadenas.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 30

int main(void) {
	char nombre[MAX], nombre2[MAX];
	char david[]="David";


	int tam;

	printf("introduce el nombre (menos de 30 carcateres, el resto se omiten): ");
	fflush(stdout);
	//scanf("%s", nombre);
	// muy insegura
	//gets(nombre);

	//
	// 1 - cadena
	// 2- tamaño
	// 3 es el fichero (stdin - tecaldo)
	fgets(nombre, MAX+1,stdin);
	nombre[strlen(nombre)-1]='\0';





	fflush(stdin);
	printf("introduce otro nombre (menos de 30 carcateres, el resto se omiten): ");
	fflush(stdout);
	fgets(nombre2, MAX,stdin);
	nombre2[strlen(nombre2)-1]='\0';


	//tam=0;
//	for (i=0;i<MAX && nombre[i]!='\0'; i++) {
//		tam++;
//	}
	printf("Tu nombre es %s y tiene %d letras", nombre,strlen(nombre));


	return EXIT_SUCCESS;
}
