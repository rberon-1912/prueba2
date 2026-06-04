//Escribir una función que dados a y b devuelva el cociente de la división
//entera, sin utilizar el operador correspondiente del lenguaje. Para esta
//resolución deben considerar la utilización de restas sucesivas
#include <stdio.h>
int Division (int a,int b) {
    int resultado;
       while (a <= b)
       {
        b = b - a;
        resultado = resultado + 1;
       }
       return resultado;
        
}
int main(){
    int Divisior,Dividendo,Resultado;
    printf("agrega un divisor");
    scanf("%i", &Divisior);
    printf("agrega un dividendo");
    scanf("%i", &Dividendo);
    Resultado = Division(Divisior,Dividendo);
    printf("el resultado es: %i",Resultado);
}
