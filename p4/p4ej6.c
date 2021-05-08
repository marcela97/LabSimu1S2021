//librerias
#include<stdio.h>
#include<math.h>

//se declaran las variables globales
int n;
int k;
float a=0;
float b=0;
float c=0;
float d=0;

int main(){
	//se pide un numero hasta el cual llega la sumatoria y se lee
	printf("ingrese hasta que numero desea que llegue las sumatorias:\n");
	scanf("%d",&n);
	//se hacen las debidas sumatorias y se imprimen las respuestas
	for(k=1;k<=n;k++){
		a+=pow(k,2)*(k-3);
	}
	for(k=2;k<=n;k++){
		b+=3*pow((k-1),-1);
	}
	for(k=1;k<=n;k++){
		c+=((1/sqrt(5))*(pow(((1+sqrt(5))/2),k)))-((1/sqrt(5))*(pow(((1-sqrt(5))/2),k)));
	}
	for(k=2;k<=n;k++){
		d+=0.1*(3*pow(2,(k-2))+4);
	}
	printf("las sumatorias son:%f,%f,%f,%f\n",a,b,c,d);
return 0;
}

