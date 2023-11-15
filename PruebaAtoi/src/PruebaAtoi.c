/*
 ============================================================================
 Name        : PruebaAtoi.c
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
	char dni[MAX];
	int numero;
	char letra;


//	puts("Introduce el DNI");
//	fflush(stdout);
//	scanf("%s", dni);
//
//	numero = atoi(dni);
//	printf("El número es %d",numero+1);

	char nombre[]="asdashdkdjfd";
	printf("DEsde la primera aparición: %s",strchr(nombre,'s')); // sdashdkdjfd

	printf("DEsde la ultima aparición: %s",strrchr(nombre,'s')); // shdkdjfd

	char bases[] = "aagtcctaggc";
	printf("\nPatrón: %s", strstr(bases,"ccta"));

	printf("\nPatrón no encontrado: %s", strstr(bases,"cctra"));









	return EXIT_SUCCESS;
}
