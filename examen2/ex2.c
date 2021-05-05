
//Librerias
#include <stdio.h>
#include <math.h>

//Declaracion e inicializacion de variables globales
float x[]={1.778,1.6002,1.8288,1.524,1.6764,1.778,1.8796,1.651,1.5748,1.7018,1.651,1.7272}, y[]={155,150,180,135,156,168,178,160,132,145,139,152};
int n = sizeof(x)/sizeof(x[0]);

//prototipo de funciones
void imprimirvec(float datos[]);
float sumdata(float datos[]);
float sumdatamul(float datos1[], float datos2[]);

void main(){
    //se inicializa las variables necesarias
    float b, m, r;
    //impresion de los datos
    imprimirvec(x);
    imprimirvec(y);
    //valores de cada parte de la ecuacion lineal
    m=(n*sumdatamul(x,y)-sumdata(x)*sumdata(y))/(n*sumdatamul(x,x)-sumdata(x)*sumdata(x));
    b=(sumdata(y)-m*sumdata(x))/n;
    //se obtiene el coeficiente de correlacion
    r=(n*sumdatamul(x,y)-sumdata(x)*sumdata(y))/sqrt((n*sumdatamul(x,x)-sumdata(x)*sumdata(x))*(n*sumdatamul(y,y)-sumdata(y)*sumdata(y)));
    printf("y = %f x + %f\n",m,b);
    //el coeficiente de determinacion es el cuadrado de r
    printf("Coeficciente de determinacion: %f\n",r*r);
}

//se realiza una funcion para imprimir los datos de un vector
void imprimirvec(float datos[]){
    puts("valor de datos");
    for (int i = 0; i < n; i++)
    {
        printf("%f ",datos[i]);
    }
    puts("\n");
}

//se realiza la suma de un vector determinado
float sumdata(float datos[]){
    float rep=0;
    for (int i = 0; i < n; i++)
    {
        rep += datos[i];
    }
    return rep;
}

//se realiza la suma de dos vectores, multiplicando cada uno de sus valores  de forma consecutiva
float sumdatamul(float datos1[], float datos2[]){
    float rep=0;
    for (int i = 0; i < n; i++)
    {
        rep += datos1[i]*datos2[i];
    }
    return rep;
}

