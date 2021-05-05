
#include<stdio.h>
#include<math.h>

float f( float x);
float df( float x);
void NewtonRaphson(float x0, float tol, int maxiter, int *actiter, float *sol);

float f(float x)
{
	float res = 0;
	res = (x*x*x)-(2*x*x)-(3*x)+(10);
	return res;
}

float df( float x)
{
	float res = 0;
	res = (3*x*x)-(4*x)-3;
	return res;
}

void NewtonRaphson(float x0, float tol, int maxiter, int *actiter, float *sol)
{
	float xant, x, dif;
	int i=1;
	xant=x0;

	x=xant-f(xant)/df(xant);

	dif = x-xant;
	(dif<0)?dif=-dif:dif;

	while (dif<tol && i<maxiter)
	{
		xant=x;
		x=xant-f(xant)/df(xant);
		i++;
	}

	*sol=x;
	*actiter = i; }

void main (void){

	float x_inicial , tolerancia , xS ;
	int iteraciones, Aiteracion ;

	printf("Ingrese el valor aproximado de x:");
	scanf("%f",&x_inicial);
	printf("ingrese el valor de tolerancia:");
	scanf("%f",&tolerancia);
	printf("ingrese el valor maximo de iteraciones:");
	scanf("%d",&iteraciones);

	NewtonRaphson(x_inicial , tolerancia , iteraciones , &Aiteracion , &xS);
	
	if (Aiteracion == iteraciones)
		printf("no hay solucion despues de %d iteraciones\n", iteraciones);
	else{
		printf("Luego de %d iteraciones la solucion es %.4f\n", Aiteracion ,xS);
	}

}

