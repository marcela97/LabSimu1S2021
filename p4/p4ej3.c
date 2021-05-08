//librerias
#include<stdio.h>
#include<math.h>


//se declaran las variables globales
float v1[3];
float v2[3];
float mv1;
float mv2;
float sv[3];
float pp;
float pv[3];
int n=0;
float m1=sqrt(mv1);
float m2=sqrt(mv2);

int main(){
	//pedimos 2 vectores con 3 numeros;x,y,z
	printf("ingrese tres numeros para un vector:\n");
	while(n<3){
		scanf("%d",&v1[n]);
		n++;
	}	
	printf("ingrese otros tres numeros para otro vector:\n");
	while(n<3){
		scanf("%d",&v2[n]);
		n++;
	}
	//se encuentran la suma vectorial, magnitudes vectoriales, producto punto y producto vectorial, imprimiento todo al final
	for(n=0;n<3;n++){
		sv[n]=v1[n]+v2[n];
	}
	for(n=0;n<3;n++){
		mv1+=v1[n]*v1[n];
	}
	for(n=0;n<3;n++){
		mv2+=v2[n]*v2[n];
	}
	for(n=0;n<3;n++){
		pp+=v1[n]*v2[n];
	}
	 for(n=0;n<3;n++){
                pp+=v1[n]*v2[n];
        }
		  pv[0]=v1[1]*v2[2]-v1[2]*v2[1];
		  pv[1]=-v1[0]*v2[2]+v1[2]*v2[0];
		  pv[2]=v1[0]*v2[1]-v1[1]*v1[0];

	printf("las magnitud del vector 1 y 2 son:%f,%f\n",m1,m2);
	printf("la suma de los vectores es:%f\n",sv[3]);
	printf("el producto escalar es:%f\n",pp);
	printf("el producto vectorial es:%f,%f,%f\n",pv[0],pv[1],pv[2]);

	return 0;
}

