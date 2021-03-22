//Librerias 
#include <stdio.h>

//Declaración y inicialización de variables globales
int N=0, i=2, primo=1;

int main(){
	//pedimos un numero entero y positivo y se analiza
	printf("ingrese un numero entero y positivo: ");
	scanf("%i",&N);
	//se hace el analisis de que tipo de numero es; si es primo o no
	while (i<N-1 && primo==1){
		if (N%i==0){
			primo=0;
		}
		i++;
	}
	//aqui se compara el numero con lo que se requiere de un numero primo y nos dice si el mismo es primo o no
		if (primo==0){
			printf("no es primo \n");
		}
	else{
		printf("es primo \n");
	}
	return 0;

}

