//Librerias
#include <stdio.h>

//Declaración y inicialización de variables globales
int N=0, i=0;

int main(){
	//le pedimos al usuario que ingrese un numero positivo y lo analizamos
	printf("ingrese un numero positivo N: ");
	scanf("%i",&N);
	i=1;
	//esto calcula la raiz
	while (i*i<=N){
		i++;
	}
	//nos devuelve el valor de la raiz, se le aproxima al entero pequeño
	printf("La raiz de N es: %i \n", i-1);
	return 0;
}

