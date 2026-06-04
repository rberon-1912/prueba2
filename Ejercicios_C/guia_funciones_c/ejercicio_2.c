#include <stdio.h>
#include <stdbool.h>

bool es_primo(int n) {
    // 1. Declaración de variables al inicio
    bool resultado;
    int i;

    // 2. Lógica de evaluación con estructura de control clara
    if (n <= 1) {
        resultado = false;
    } else if (n == 2) {
        resultado = true;
    } else if (n % 2 == 0) {
        resultado = false;
    } else {
        // Inicializamos suponiendo que es primo
        resultado = true;
        i = 3;

        /* Usamos un ciclo 'while' con una condición compuesta. 
           Se detendrá si encontramos un divisor O si i supera n/2.
        */
        while (resultado == true && i <= n / 2) {
            if (n % i == 0) {
                resultado = false; // Se encontró un divisor
            }
            i += 2;
        }
    }

    // 3. Un único punto de salida
    return resultado;
}

int main() {
    int num = 17;
    if (es_primo(num)) {
        printf("%d es primo.\n", num);
    } else {
        printf("%d no es primo.\n", num);
    }
    return 0;
}