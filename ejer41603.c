//librerias
#include <stdio.h>

//Declaración y inicialización de variables globales
int N1=0, N2=0, i=0, j=2, primo=1;

int main(){
	//se le pide al usuario dos numeros enteros y se guardan dichos valores
	printf("ingrese un número entero: ");
	scanf("%i",&N1);
	printf("ingrese otro número entero: ");
	scanf("%i",&N2);
	i=N1;
	//cinlo para el rango 
	while (i<=N2){
		j=2;
		primo=1;
	//se generan los primos entre el rango
	while (j<i && primo==1){
		if (i%j==0){
			primo=0;
		}
		j++;
	}
	if (primo==1){
	//nos muestra cuales son los primos entre los rangos elegidos
		printf("%i \n",i);
	}
	i++;
	}
	return 0;
}

