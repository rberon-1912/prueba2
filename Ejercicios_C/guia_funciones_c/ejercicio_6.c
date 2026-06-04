#include <stdio.h>
#include <stdbool.h>
bool capicua(int a){
    int i,a_original,digito;
    bool es_capicua;
    int num_invertido = 0;
    a_original = a;
    while (a > 0)
    {
        digito = a % 10;
        num_invertido = (num_invertido * 10 ) + digito;
        a = a / 10;
    }
    if (num_invertido == a_original && a_original > 9)
    {
        es_capicua = true;
    }
    else{
        es_capicua = false;
    }
    return es_capicua;
    
}
void main(){
    bool capicua1;
    capicua1 = capicua(1);
    if (capicua1){
       printf("es capicua");
    }
    else{
       printf("no es capicua");
    }
    return;
}