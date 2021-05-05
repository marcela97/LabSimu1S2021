#include <stdio.h>
#include <math.h>

int var[4];
int n;
int c;
int j;
int i;
int aux;

int main(){
	printf("ingrese cinco numeros\n");
	for (i = 0; i <= c; i++){
		printf(":\n");
		scanf("%d",&var[i]);
	}

	for (i = 0; i <= c-1; i++){
		for (j = 0; j <= c-1; j++){
			if (var[j] > var[j + 1]){
			aux = var[j];
			var[j] = var[j +1];
			var[j + 1] = aux;
			}
		}
	}

	for (i = 0; i <= c; i++){
		printf("%d\n",var[i]);
	}

	return 0;
}


