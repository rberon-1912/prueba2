#include <stdio.h>
float funtion_porcentaje(float a,float b){
    float resultado;
    return resultado = (a / b)*100.00;
}
void main(){
    float resultado;
    float a = 156;
    float b = 1560;
    resultado = funtion_porcentaje(a,b);
    printf("%f representa el %f porciento de %f",a,resultado,b );
    return;
}