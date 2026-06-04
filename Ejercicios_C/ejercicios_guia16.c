#include <stdio.h>
int main (){
    int numero,digito,numero_original;
    int menor_digito = 9;
    int mayor_digito = 0;
    int cantidas_par = 0;
    int cantidas_impar = 0;
    printf("ingrese un numero entero positivo");
    scanf("%d",&numero);
    numero_original = numero;
    while (numero > 0) {
        digito = numero % 10;
        if (digito % 2 == 0)
        {
            cantidas_par ++;
        }
        else{
            cantidas_impar ++;
        }
        if (digito > mayor_digito)
        {
            mayor_digito = digito;
        }
        if (digito < menor_digito)
        {
            menor_digito = digito;
        }
        numero = numero / 10;
    }
    printf("el numero %d tiene %d numeros pares, %d impares, %d es su mayor digito y %d es el menor",numero_original,cantidas_par,cantidas_impar,mayor_digito,menor_digito );
    return 0;
}
