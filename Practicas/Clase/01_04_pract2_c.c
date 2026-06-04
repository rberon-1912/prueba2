//Solicitar al usuario el ingreso de una temperatura (puede tener decimales por
//ejemplo 24.5) y la unidad en la que se encuentra (siendo solo un carácter F ó C).
//Luego el programa debe mostrar la temperatura ingresada, convertida en la otra
//unidad.
//La relación entre temperaturas Celsius y Fahrenheit está dada por la fórmula:
//C=5.0 / 9.0 * (F − 32)
// Created by user on 01/04/2026.

#include <stdio.h>

int main() {
    float TEMP;
    int UNIDAD;
    printf("ingrese temperatura");
    scanf("%i", &TEMP);
    printf("elija una unidad de medida C o F");
    scanf("%c", &UNIDAD);
    if (UNIDAD == 'C' || UNIDAD == 'F');
        printf("elegiste los grados celcius");
        if (UNIDAD == 'C');

    else;
       printf("elijiste un valor invalido");


}

