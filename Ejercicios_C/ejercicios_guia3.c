#include <stdio.h>
#define PI 3.14159
void main(){
    int RADIO = 20;
    float VOLUMEN;
    VOLUMEN = RADIO * RADIO * RADIO * (4.0/3.0) * PI;
    printf("el volumen de la esfera es %f" ,VOLUMEN);
    return;
}