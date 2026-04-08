//Ingresar una serie de numeros finalizada en cero y mostrar el cubo de cada numero ingresado.
#include <stdio.h>
int main() 
    {
      int num,cubo;
      printf("Ingrese un numero (0 para finalizar): ");
      scanf("%d", &num);
      while (num !=0)
        {
           cubo = num * num * num;
           printf("el numero ingresado es: %d y su cubo es: %d", num, cubo);
           printf("Ingrese un numero (0 para finalizar): ");
           scanf("%d", &num);
        } 
        return 0;
    }
