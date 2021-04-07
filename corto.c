#include <stdio.h>
#include <math.h>

int l;
float v1;
float v2;
float sum(float a, float b);
float mult(float c, float d);
float div(float e, float f);
float res(float g, float h);

int main(){
	printf("ingrese un número del 1 a 4 para ejecutar una operación:");
	scanf("%d",&l);
	printf("ingrese un numero:");
	scanf("%f",&v1);
	printf("ingrese otro numero:");
	scanf("%f",&v2);
	switch(l){
		case 0: 
			break;
		case 1: sum(v1,v2);
			printf("la suma es: %f \n", sum(v1,v2));
			break;
		case 2: res(v1,v2);
			printf("la resta es: %f \n", res(v1,v2));
			break;
		case 3: mult(v1,v2);
			printf("la multiplicación es: %f \n", mult(v1,v2));
			break;
		case 4: div(v1,v2);
			printf("la división es: %f \n", div(v1,v2));
			break;
	}
return 0;
}

float sum(float a, float b){
	return a + b;
}
float mult(float c, float d){
	return d*c;
}
float div(float e, float f){
	return e/f;
}
float res(float g, float h){
	return g-h;
}
