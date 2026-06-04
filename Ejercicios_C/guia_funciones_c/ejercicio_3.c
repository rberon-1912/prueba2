#include <stdio.h>
int calcular_factorial(int n){
    int resultado = 1;
    int i;
    if (n <= 0)
    {
        resultado = 0;
    }
    else{
        for ( i = 0; i < n; i++)
        {
            resultado = resultado * (n-i);
        }   
    }
    return resultado;
}
void main(){
    int resultado;
    resultado = calcular_factorial(4);
    printf("%d", resultado);
    return;
}