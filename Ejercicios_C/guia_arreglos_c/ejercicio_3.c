#include <stdio.h>

#define MAX 100

// Prototipo
void invertirVector(float vec[], int cant);

int main() {

    float vector[MAX];
    int cantidad = 0;
    int i;
    float num;

    printf("Ingrese numeros reales positivos.\n");
    printf("Finaliza con un numero negativo.\n\n");

    // Carga del vector
    do {

        scanf("%f", &num);

        if(num >= 0 && cantidad < MAX) {
            vector[cantidad] = num;
            cantidad++;
        }

    } while(num >= 0 && cantidad < MAX);
    
    invertirVector(vector, cantidad);

    // Mostrar vector invertido
    printf("\nContenido del vector invertido:\n");

    for(i = 0; i < cantidad; i++) {
        printf("Posicion %d: %.2f\n", i + 1, vector[i]);
    }

    return 0;
}

// Funcion para invertir el vector
void invertirVector(float vec[], int cant) {

    int i;
    float aux;

    for(i = 0; i < cant / 2; i++) {

        aux = vec[i];
        vec[i] = vec[cant - 1 - i];
        vec[cant - 1 - i] = aux;
    }
}