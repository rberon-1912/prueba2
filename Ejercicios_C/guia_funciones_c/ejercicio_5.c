#include <stdio.h>
double potencia(double a, double b){
    int i;
    int exponente_positivo;
    double resultado =1.0;
    if (b < 0){
        exponente_positivo = -b;
    }
    else{
        exponente_positivo = b;
    }
    for (i = 0; i < exponente_positivo; i++)
    {
        resultado = resultado * a;
    }
    if( b < 0 ){
        resultado= 1.0/resultado;
    }
    return resultado;
    
}
int main()
{
    // Caso i: a > 0, b > 0
    printf("2^3 = %.2f\n", potencia(2, 3));
    
    // Caso ii: a > 0, b < 0 (2^-3 = 1/8 = 0.125)
    printf("2^-3 = %.3f\n", potencia(2, -3));
    
    // Caso iii: a < 0, b > 0 (-2^3 = -8)
    printf("-2^3 = %.2f\n", potencia(-2, 3));
    
    // Caso v: b = 0
    printf("5^0 = %.2f\n", potencia(5, 0));
    return 0;
}
