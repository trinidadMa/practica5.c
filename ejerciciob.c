#include "misfunciones.h"
#include<stdio.h>
int main(){
    
    int numero_1,numero_2,resultado_1,resultado_2;
   
    do{
    printf("introduzca el primer numero:\n");
    scanf("%d",&numero_1);
    printf("introduzca el segundo numero:\n");
    scanf("%d",&numero_2);
    
    resultado_1=sumar_enteros(numero_1,numero_2);
    resultado_2=restar_enteros(numero_1,numero_2);
    printf("la sumatoria de los numeros es =>%d\n",resultado_1);
    printf("la resta de los numeros es =>%d\n",resultado_2);   
    }while(numero_1!=0||numero_2!=0);
    
    printf("fin del programa");
    return 0;
}
