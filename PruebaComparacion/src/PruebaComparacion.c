/*
 ============================================================================
 Name        : PruebaComparacion.c
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


void concatenar( char res[], char cad1[], char cad2[], char cad3[]) {
	strcpy(res,cad1);
	strcpy(res,cad2);
	strcpy(res,cad3);
}


int main(void) {
	char usuario[MAX];

	//char nombre[10];

//	printf("Introduce el nombre de usuario");
//	fflush(stdout);
//	scanf("%s", usuario);
//
//	if (strcmp(usuario,"admin")==0) {
//		printf("Bienvenido usaurio administrador");
//	} else {
//		printf("Bienvenido, %s",usuario);
//	}

	char texto1[MAX]="Don Pepito";
	 char texto2[MAX]=" y ";
	 char texto3[MAX]="Don Jose";

	 int longitud = strlen(texto1)+ strlen(texto2)+strlen(texto3)+1;
	 char * textoCompleto = (int *) malloc(sizeof(char)*longitud);

	 strcpy(textoCompleto, texto1);
	 strcat(textoCompleto, texto2);
	 strcat(textoCompleto, texto3);


	 printf("%s", texto1);


	 concatenar(textoCompleto,texto1,texto2,texto3);

	return EXIT_SUCCESS;
}
