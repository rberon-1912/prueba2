//Escribir una función que reciba un valor y calcule el factorial del mismo.
//No debe imprimir el valor, debe solamente devolverlo.
//Si no se puede calcular el factorial del valor recibido, la función deberá devolver 0, de lo contrario deberá devolver el valor calculado
#include <stdio.h>
int calcular_factorial (int a){
    int factorial = 1;
    if (a < 0)
     {
      factorial = 0;
     }
    else;
     while (a > 0) {
       factorial = factorial * a;
       a = a - 1; 
      }
    return factorial;
}
int main(){
    int resultado_fac;
    int num;
    printf("pon un numero para conocer el factorial");
    scanf("%d", &num);
    resultado_fac = calcular_factorial(num);
    return 0;
}