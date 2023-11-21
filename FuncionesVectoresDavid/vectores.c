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


int sonParalelos(int tam, float vector1[], float vector2[]) {
	float factor, valor1,valor2;
	int i;


	for(i=0; i<tam && vector2[i]==0; i++) {
	}
	if (i<tam) {
		valor1=vector1[i];
		valor2=vector2[i];
		factor = valor1/valor2;
	}

	for (i=0; i< tam;i++) {
		if (!((vector1[i]==0 && vector2[i]==0) || vector1[i]/vector2[i] == factor ))
		{
			return 0;
		}
	}
	return 1;
}

float productoEscalar(int tam, float v1[], float v2[]){
	int i;
	float producto=0;
	for (i=0; i<tam;i++) {
		producto=producto+v1[i]*v2[i];
	}
	return producto;
}

int sonPerpendiculares(int tam, float v1[], float v2[]) {
//	if (productoEscalar(tam,v1,v2)==0) {
//		return 1;
//	}
//	return 0;

	return !productoEscalar(tam,v1,v2);
}

void ordenarSeleccion(int tam, int vector[]){
	int i,j;
	int menor;
	int posMenor;

	for (i=0;i<tam; i++) {
		menor=vector[i];
		posMenor=i;
		for(j=i+1;j<tam;j++) {
			if (vector[j]<menor) {
				menor=vector[j];
				posMenor=j;
			}
		}
		if(i!=posMenor) {
			vector[posMenor]=vector[i];
			vector[i]=menor;
		}
	}
}

void ordenarBurbuja(int tam, int vector[]) {
	int i,j;
	int aux;
	int hayCambio=1;

	for (i=0;i<tam-1;i++) {
		hayCambio=0;
		for (j=0;j<tam-1-i;j++) {
			if (vector[j]>vector[j+1]) {
				aux=vector[j];
				vector[j]=vector[j+1];
				vector[j+1]=aux;
				hayCambio=1;
			}
		}
		if (!hayCambio) return;
	}
}

int esCapicua(int tam, int vector[]){
	int i,j=tam-1;
	for (i=0; i<tam/2; i++) {
		if (vector[i] != vector[j]) {
			return 0;
		}
		j--;
	}
	return 1;
}

int esCapicuaSinj(int tam, int vector[]){
	int i;
	for (i=0; i<tam/2; i++) {
		if (vector[i] != vector[tam-1-i]) {
			return 0;
		}
	}
	return 1;
}

int esPalindromo(char cadena[]) {
	int i,j;

	i=0;
	j=strlen(cadena)-1;
	while(i<j) {
		while(i<strlen(cadena) && cadena[i]==' ') { i++;}
		while(j>0 && cadena[j]==' ') { j--;}
		if (cadena[i] != cadena[j]) {
			return 0;
		}
		i++;
		j--;
	}
	return 1;
}

void invertir(int tam, int vector[], int inversa[]) {
	int i;
	int j=tam-1;

	for (i=0; i< tam; i++) {
		inversa[i] = vector[j--];
	}
}

void invertir2(int tam, int vector[]){
	int aux;
	int i=0;
	int j=tam-1;

	for (i=0;i<j;i++) {
		aux=vector[i];
		vector[i]=vector[j];
		vector[j]=aux;
		j--;
	}
}


void concatenar(int tam1, int tam2, int v1[], int v2[], int v3[]) {
	int i;
	for(i=0;i<tam1;i++) {
		v3[i]=v1[i];
	}

	for (i=0;i<tam2;i++) {
		v3[tam1+i]=v2[i];
	}

//	for (i=tam1;i<tam1+tam2;i++) {
//		v3[i]=v2[i-tam1];
//	}

}
