//declaramos las librerias
#include<stdio.h>
#include<math.h>

//declaramos las variables globales
float G=6.693*pow(10,-11);
float Rt=6.378*pow(10,6);
float Mt=5.9736*pow(10,24);
float R=287.06;
float L=6.5*pow(10,-3);
float go=9.81;
float To=288.15;
float Po=101325;
float yo=0.54;
float tfM=153.94;
float tfK=247.13;
float tfC=373.66;
//datos del cohete 1: Ah Mun
float EM=3*pow(10,7);
float TSFCM=3.248*pow(10,-4);
float CDM=61.27;
float AM=201.06;
float mM=1.1*pow(10,5);
float miM=1.5*pow(10,6);
//datos del 2: Ahau Kin
float EK=2.7*pow(10,7);
float TSFCK=2.248*pow(10,-4);
float CDK=61.27;
float AK=201.06;
float mK=1.1*pow(10,5);
float miK=1.5*pow(10,6);
//datos del 3: Chac
float EC=2.5*pow(10,7);
float TSFCC=2.248*pow(10,-4);
float CDC=70.25;
float AC=215.00;
float mC=1.8*pow(10,5);
float miC=2.1*pow(10,6);
float t=0.00;

int main(){
float u=dy;
float duM(float EM, float FM, float mcM,float gM);

//se muestran las caracteristicas de cada cohete
	printf("las caracteristicas del cohete Ah Mun son;\n su empuje:%f\n el consumo de dicho empuje:%f\n el coeficiente de deformacion:%f\n su area transversal:%f\n masa del propulsor:%f\n masa inicial del combustible:%f\n",EM,TSFCM,CDM,AM,mM,miM);

	printf("las caracteristicas del cohete Ahau Kin son;\n su empuje:%f\n el consumo de dicho empuje:%f\n el coeficiente de deformacion:%f\n su area transversal:%f\n masa del propulsor:%f\n masa inicial del combustible:%f\n",EK,TSFCK,CDK,AK,mK,miK);

	printf("las caracteristicas del cohete Chac son;\n su empuje:%f\n el consumo de dicho empuje:%f\n el coeficiente de deformacion:%f\n su area transversal:%f\n masa del propulsor:%f\n masa inicial del combustible:%f\n",EC,TSFCC,CDC,AC,mC,miC);


while (yo==0){
printf(" el tiempo en el que impacta es:%f\n",t);
t+=delta;
h+=duM(E,F,mc,g);
			}


//se muestran los tiempos en que se agota el combustible
printf("el tiempo en que se agota el combustible del cohete Ah Mun es: %f\n",tfM);
printf("el tiempo en que se agota el combustible del cohete Ahau Kin es; %f\n",tfK);
printf("el tiempo en que se agota el combustible del cohete Chac es: %f\n",tfC);

return 0;
}

//las ecuaciones que estaremos usando
void mfM(float TSFCM, float EM){
	mfM=-TSFCM*EM*t+miM;
}
void mfK(float TSFCK, float EK){
        mfK=-TSFCK*EK*t+miK;
}
void mfC(float TSFCC, float EC){
        mfC=-TSFCC*EC*t+miC;
}
void mcM(float mfM, float mM){
	mcM=mM+mfM;
}
void mcK(float mfK, float mK){
        mcK=mK+mfK;
}
void mcC(float mfC, float mC){
        mcC=mC+mfC;
}
void gM(float yM, float G, float Mt, float Rt){
	gM= G*Mt/pow((Rt+yM),2);
}
void gK(float yK, float G, float Mt, float Rt){
        gK= G*Mt/pow((Rt+yK),2);
}
void gC(float yC, float G, float Mt, float Rt){
        gC= G*Mt/pow((Rt+yC),2);
}
void y2M(float EM, float FM, float mcM,float gM){
	y2M=(EM-FM-mcM*gM)*pow(mcM,-1);
}
void y2K(float EM, float FM, float mcM,float gK){
        y2K=(EK-FK-mcK*gK)*pow(mcK,-1);
}
void y2C(float EC, float FC, float mcC,float gC){
        y2C=(EC-FC-mcC*gC)*pow(mcC,-1);
}

