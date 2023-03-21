#include<stdio.h>
int sumar_enteros(int numero_a, int numero_b);
int restar_enteros(int numero_a,int numero_b);

int main(){
    int numero1,numero2,resultado1,resultado2;
    
    do{
    printf("Ingrese el primer numero:\n");
    scanf("%d",&numero1);
    printf("Ingrese el segundo numero:\n");
    scanf("%d",&numero2);
    
    resultado1=sumar_enteros(numero1,numero2);
    resultado2=restar_enteros(numero1,numero2);
    
    printf("La suma de los numeros enteros es =>%d\n",resultado1);
    printf("La resta de los numeros enteros es =>%d\n",resultado2);   
    
        
    }while(numero1!=0||numero2!=0);
    
    printf("fin del programa");
    return 0;
}
/////funciones
int sumar_enteros(int numero_a,int numero_b){
int suma;
suma=numero_a+numero_b;
return suma;
}
int restar_enteros(int numero_a,int numero_b){
int resta;
resta=numero_a-numero_b;
return resta;
}
