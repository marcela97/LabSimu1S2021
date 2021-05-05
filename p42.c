#include <stdio.h>

int n=0;
int m=0;
void llenar();
void ordenA();
int par[3];
int copia;
int main() {
        llenar() ;
        printf("\n");
        ordenA();
        return 0;
}
void llenar(){
puts("ingrese 4 numeros enteros");
        while (n<4)
        {
                scanf("%d",&par[n]);
                n++;
        }
}
void ordenA(){
        for(n=0;n<4;n++)
        {
                for(m=n;m<4;m++)
                {
                        if (par[n]>=par[m])
                        {
                                copia=par[n];
                                par[n]=par[m];
                                par[m]=copia;
                        }

                }
        }

        for(n=0;n<4;n++)
        {
                printf("%d \n",par[n]);
        }

}

