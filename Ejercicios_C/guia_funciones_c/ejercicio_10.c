#include <stdio.h>
double potencia(double x,double k)
  {
    int num_positivo,i;
    double resultado = 1.0;
    if (num_positivo < 0 ){
        num_positivo = -k;
    } else{
        num_positivo = k;
    }
    for ( i = 0; i < num_positivo; i++)
    {
         resultado *= x;
    }
    return resultado;
  }
double factorial(int n){
    double resultado = 1.0;
    int i;
    for (i=1; i <= n ;i++){
        resultado *= i;
    }
    return resultado;
      
}
double aproximar_seno(double x) {
    double suma_total = 0.0;
    double termino;
    int k;
    int exponente_y_fact;
    double signo;

    // El enunciado pide al menos 10 terminos (k de 0 a 9)
    for (k = 0; k < 10; k++) {
        // 1. Calculamos el exponente (siempre impar: 2k + 1)
        exponente_y_fact = (2 * k) + 1;

        // 2. Determinamos el signo: positivo si k es par, negativo si k es impar
        signo = (k % 2 == 0) ? 1.0 : -1.0;

        // 3. Calculamos el termino completo
        termino = signo * (potencia(x, exponente_y_fact) / factorial(exponente_y_fact));

        // 4. Acumulamos
        suma_total += termino;
    }

    return suma_total;
}

int main() {
    double x = 1.5708; // Aproximadamente PI / 2 (seno deberia ser ~1)
    
    printf("Aproximacion del seno(%f) con 10 terminos: %f\n", x, aproximar_seno(x));
    
    return 0;
}