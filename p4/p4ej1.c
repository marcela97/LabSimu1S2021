//librerias
#include <stdio.h>
#include <math.h>

//declaramos las variables globales
int n=0;
int var[10];
int vartem;
int i;
char b;
int c=10;
int j;
int aux;

//el codigo principal
int main(){
	//pedimos 10 numero para llenar el vector y los leemos
	printf("ingrese numeros pares del 2 al 20\n");
	while (n<10){
		scanf("%i",&vartem);
		//printf("%d",var[n]);
		//solo para numero entre 2 y 20 que sean pares
		if (vartem % 2==0 && vartem<=20 && vartem!=0){
			var[n]=vartem;
			n++;
	}
		else{
			printf("no es un numero par entre 2 al 20\n");
		}
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
 
//se elige como se quiere ver el orden del vector y se imprime
	printf("eliga como desea ver el orden de los numeros: a o d\n");
	scanf("%c",&b);

	if(b!='a' && b!='d'){ scanf("%c",&b);}

	switch(b){
		case 'a':  for (i = 0; i <= c-1; i++) {
                        printf("%i\n",var[i]);
			 }
			 break;
		case 'd':  for (i = c-1; i >= 0; i--){
                        printf("%i\n",var[i]);
		}
		break;
		//default : scanf("%c",&b);
	}

return 0;
}

