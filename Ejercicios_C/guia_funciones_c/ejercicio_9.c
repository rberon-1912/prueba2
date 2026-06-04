#include <stdio.h>

long extraer_sub_codigo(long codigo, int n, int k) {
    long resultado;
    long divisor_posicion = 1;
    long divisor_corte = 1;
    int i;

    // 1. Validacion de consistencia inicial
    // n debe ser mayor a 0 y la posicion k no puede ser negativa
    if (n <= 0 || k < 0 || codigo < 0) {
        resultado = -1;
    } else {
        // 2. Movernos hasta la posicion k-esima
        // Ejemplo: Si k=3, dividimos por 1000 para "saltar" los primeros 3 digitos
        for (i = 0; i < k; i++) {
            divisor_posicion *= 10;
        }
        
        long numero_cortado = codigo / divisor_posicion;

        // 3. Preparar el corte para quedarnos solo con n digitos
        // Ejemplo: Si n=4, el divisor sera 10000
        for (i = 0; i < n; i++) {
            divisor_corte *= 10;
        }

        // 4. Extraer el sub-codigo
        resultado = numero_cortado % divisor_corte;

        // 5. Validacion final: Si al dividir por la posicion el numero quedo en 0
        // y k era mayor que 0, significa que k estaba fuera de rango
        if (numero_cortado == 0 && k > 0 && codigo != 0) {
            resultado = -1;
        }
    }

    return resultado; // Unico punto de salida
}

int main() {
    // Prueba Ejemplo A: codigo=48573628, n=4, k=3 -> Deberia dar 8573
    long resA = extraer_sub_codigo(48573628L, 4, 3);
    printf("Ejemplo A: %ld\n", resA);

    // Prueba Ejemplo B: codigo=1234, n=3, k=0 -> Deberia dar 234
    long resB = extraer_sub_codigo(1234L, 3, 0);
    printf("Ejemplo B: %ld\n", resB);

    return 0;
}