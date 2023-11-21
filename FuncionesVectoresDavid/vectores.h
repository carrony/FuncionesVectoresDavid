/*
 * vectores.h
 *
 *  Created on: 9 nov 2023
 *      Author: Usuario
 */

#ifndef VECTORES_H_
#define VECTORES_H_
#include <stdio.h>
#define MAX 50
	/**
	 * Procedimiento que pide un vector por teclado
	 * Pide tantos elementos como indique el parámetro tam
	 */
	void pedirVector(int tam, int vector[]);

	void pedirVectorReales(int tam, float vector[]);

	void mostrarVectorReales(int tam, float vector[]);

	void mostrarVectorRealesIntervalo(int tam, float vector[],
			                         float minimo, float maximo) ;
	/**
	 * Procedimiento que muestra un vector por pantalla. Hay que pasarle
	 * el argumento tam para indicar cuantos elementos del vector deben
	 * mostrarse
	 */
	void mostrarVector(int tam, int vector[]);

	void mostrarVectorCorchete(int tam, int vector[]);

	/**
	 * Función que devuelve la casilla de la primera ocurrencia enb el vector del
	 * número indicado por buscar. Devuelve -1 si el elemento no ha sido encontrado
	 */
	int posicionPrimerElemento(int tam, int vector[], int buscar);


	void mostrarMenoresQue(int tam, int vector[], int num);

	/**
	 * Fucnión que rota todos los elementos del vector una casilla hacia la izquierda de manera cícicla
	 * Ej: [3,4,2,5,1] se trasnforma en [4,2,5,1,3]
	 */
	void rotarIzq(int tam, int vector[]);

	/**
	 * Fucnión que rota todos los elementos del vector una casilla hacia la derecha de manera cícicla
	 * Ej: [3,4,2,5,1] se trasnforma en [1,3,4,2,5]
	 */
	void rotarDcha(int tam, int vector[]);

	void mostrarDesdeA(int tam, int vector[], int a);

	int sonParalelos(int tam, float vector1[], float vector2[]);


	float productoEscalar(int tam, float v1[], float v2[]);

	int sonPerpendiculares(int tam, float v1[], float v2[]);

	void ordenarSeleccion(int tam, int vector[]);

	void ordenarBurbuja(int tam, int vector[]);


	int esCapicua(int tam, int vector[]);

	int esPalindromo(char cadena[]);



#endif /* VECTORES_H_ */
