//librerias
#include<stdio.h>
#include<math.h>

//se declaran las variables globales
int i;
int k=1;
int num;

//codigo principal
int main(){
	//se pide un numero entero y se lee
	printf("ingrese un numero:\n");
	scanf("%d",&num);

//dependiendo del numero dado nos dara diferentes falores para su factorial
	if(num<0) k=0;
	else if(num==0) k=1;
	else{
//si el numero es mayor a 0 encontramos el factorial con una funcion recursiva
	for(i = 1; i <= num; i++){
		k=k*i;
	}
	}
	//se imprime el valor del factorial
	printf("el factorial es:%d\n",k);

return 0;
}

