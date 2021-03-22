//Libreiras
#include <stdio.h>


//Declaración y inicialización de variables globales
int n=0;
float x=0, med=0, max=0, min=0, mid=0;

int main(){
	//pedimos un valor para altura y la analiza el codigo
	printf("ingrese un valor abritrario de altura: ");
	scanf("%f",&x);
	//igualamos max y min a x para poder encontrarlos despues
	max=x;
	min=x;
	//si el valor de altura es mayor o igual a cero seguimos pidiendo mas valores de altura y guardandolos
	while (x>=0){
		n++;
		med=med+x;
		if (x>max){
		max=x;
		}
		if (x<min){
		min=x;
		}
		printf("ingrese un valor arbitrario de altura: ");
		scanf("%f",&x);
	}
	mid=med/n;
	//al ingresar una altura negativa nos dice que no es un numero positivo y se nos devuelve la media, el maximo y minimo de las alturas
	if (n=0){
		printf("no es un numero  positivo");
	}
		else{
			printf("media: %.3f, maxima: %.3f, minimo: %.3f \n", mid,max,min);
		}	
	return 0;
	}
