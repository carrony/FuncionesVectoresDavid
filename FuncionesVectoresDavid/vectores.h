/*
 * vectores.h
 *
 *  Created on: 9 nov 2023
 *      Author: Usuario
 */

#ifndef VECTORES_H_
#define VECTORES_H_

	/**
	 * Procedimiento que pide un vector por teclado
	 * Pide tantos elementos como indique el parámetro tam
	 */
	void pedirVector(int tam, int vector[]);

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


#endif /* VECTORES_H_ */
