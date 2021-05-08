//las librerias
#include <stdio.h>
#include <math.h>

//declaramos las variables globales
int var[5];
int n=0;
int c=5;
int j;
int i;
int aux;

//codigo principal
int main(){
	//pedimos 5 numero para llenar un vector y los leemos 
	printf("ingrese cinco numeros\n");
	while (n<5){
		scanf("%i",&var[n]);
		n++;
	}
	
//se hace el ordenamiento
	for (i = 0; i <= c-1; i++){
		for (j = i+1; j < c; j++){
			if (var[i] > var[j]){
			aux = var[i];
			var[i] = var[j];
			var[j] = aux;
			}
		}
	}
//se ordena y imprime de forma ascendente
	for (i = 0; i <= c-1; i++){
		printf("%i\n",var[i]);
	}

	return 0;
}


