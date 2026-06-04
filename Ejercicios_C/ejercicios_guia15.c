#include <stdio.h>

int main() {
    int num;
    int mayor, menor;
    int suma = 0;
    int contador = 0;
    float promedio;

    printf("Ingrese numeros de a uno (ingrese 0 para finalizar):\n");
    scanf("%d", &num);

    // Si el primer numero ya es 0, no hay nada que calcular
    if (num == 0) {
        printf("No se ingresaron datos para evaluar.\n");
    } else {
        // Inicializamos el mayor y menor con el PRIMER numero ingresado
        mayor = num;
        menor = num;

        // El bucle sigue MIENTRAS el numero no sea 0
        while (num != 0) {
            
            // 1. Verificamos si hay un nuevo mayor o menor
            if (num > mayor) {
                mayor = num;
            }
            if (num < menor) {
                menor = num;
            }

            // 2. Acumulamos para el promedio
            suma = suma + num;
            contador++; // Es lo mismo que contador = contador + 1

            // 3. Volvemos a pedir un numero al final de la vuelta
            scanf("%d", &num);
        }

        // Calculamos el promedio (usamos (float) para no perder los decimales)
        promedio = (float)suma / contador;

        // Imprimimos los resultados
        printf("\n--- RESULTADOS ---\n");
        printf("El numero mayor es: %d\n", mayor);
        printf("El numero menor es: %d\n", menor);
        printf("El promedio de la serie es: %.2f\n", promedio);
    }

    return 0;
}