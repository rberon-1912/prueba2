//leer numero e indicar  si es capicúa o no
#include <stdio.h>
#include <stdbool.h>    
int main () {
    int Num, NumInvertido, Aux;
    printf ("poner un numero para ver si es capicúa");
    scanf("%d",&Num);
    Aux=Num;
    NumInvertido = Aux % 10;
    while (Aux > 9)
     {
        Aux = Aux / 10;
        NumInvertido = NumInvertido * 10 + Aux % 10;
     }
    if (Num == NumInvertido)
      printf ("tu numero: %d es capicua", NumInvertido);
    else;
      printf ("tu numero no es capicúa");
    return 0;
     
}