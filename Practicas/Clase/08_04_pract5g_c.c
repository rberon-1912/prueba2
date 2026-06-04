//1. Se tiene una lista de casos confirmados de coronavirus por cada país 
//se pide:
//Indicar cual es el promedio mundial
//Cantidad de Casos mundiales
//Que cantidad de casos tiene el país con menos casos
//Que cantidad de casos tiene el país con más casos
//Ingrese casos -1 para termina
#include <stdio.h>

int main() 
{
    int casos_pais;
    int cantidad_paises = 0;
    int total_casos = 0;
    int minimo_casos, maximo_casos;

    printf("Ingrese la cantidad de casos (-1 para frenar)\n");
    scanf("%d", &casos_pais);

    while (casos_pais != -1) {
        
        if (cantidad_paises == 0) {
            minimo_casos = casos_pais;
            maximo_casos = casos_pais;
        }

        total_casos += casos_pais;
        cantidad_paises++;

        if (casos_pais < minimo_casos)
            minimo_casos = casos_pais;

        if (casos_pais > maximo_casos)
            maximo_casos = casos_pais;

        printf("Ingrese la cantidad de casos (-1 para frenar)\n");
        scanf("%d", &casos_pais);
    }

    if (cantidad_paises > 0) {
        printf("La cantidad total de casos es de %d\n", total_casos);
        printf("El promedio de casos es de %.2f\n", (float) total_casos / cantidad_paises);
        printf("El minimo de casos es de %d\n", minimo_casos);
        printf("El maximo de casos es de %d\n", maximo_casos);
    }

    return 0;
}