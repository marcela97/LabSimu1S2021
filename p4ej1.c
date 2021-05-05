#include <stdio.h>
#include <math.h>

int n=0;
int var[10];
int i;
char b;
int c=10;
int j;
int aux;

int main(){
	printf("ingrese numeros pares del 2 al 20\n");
	while (n<=9){
		scanf("%i",&var[n]);
		//printf("%d",var[n]);
		
		if (var[n] % 2==0 && var[n]<=20 && var[n]!=0){
			n++;
printf("%i",var[n]);
	}
		else{
			printf("no es un numero par entre 2 al 20\n");
		}
	}

 for (i = 0; i <= c-1; i++){
                for (j = 0; j <= c-1; j++){
                        if (var[j] > var[j + 1]){
                                aux = var[j];
                                var[j] = var[j + 1];
                                var[j + 1] = aux;
                        }
                }
        }
 

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

