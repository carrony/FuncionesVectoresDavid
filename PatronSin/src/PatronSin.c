/*
 ============================================================================
 Name        : PatronSin.c
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

	char cadena[MAX], patron[MAX];

	printf("introduce la cadena de ADN: ");
	fflush(stdout);
	scanf("%s", cadena);

	printf("introduce el patrón a comprobar: ");
	fflush(stdout);
	scanf("%s", patron);

//	if (strstr(cadena, patron)!=NULL) {
//		printf("Patrón encontrado");
//	} else {
//		printf("Cepa mno encontrada");
//	}


	int i, j=0, fallo=0;
	for (i=0; i<strlen(cadena); i++) {
		if (cadena[i]==patron[0]) {
			fallo=0;
			for (j=1;j<strlen(patron) && fallo==0; j++ ) {
				if(cadena[i+j]!=patron[j]) {
					fallo=1;
				}
			}
			if (fallo==0) {
				printf("Patrón encontrado");
				break;
			} else {
				printf("No se ha encontrado");
			}
		}
	}





	return EXIT_SUCCESS;
}
