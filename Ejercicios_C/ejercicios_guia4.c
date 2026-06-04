//calculando la suma de los n primeros numeros naturales.
#include <stdio.h>
void main(){
    int NUM,SUMA_SU;
    printf("ingrese un numero para evaluar su suma \n");
    scanf("%d", &NUM);
    SUMA_SU = (NUM*(NUM+1))/2;
    printf("el valor de la suma es %d", SUMA_SU);
    return;
}