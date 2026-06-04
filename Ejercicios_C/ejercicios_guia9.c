#include <stdio.h>
int main (){
    float Temperatura;
    char Unidad;
    printf("ingrese una temperatura: \n");
    scanf("%f", &Temperatura);
    printf("ingrese su unidas: \n");
    scanf(" %c", &Unidad);
    if (Unidad == 'c'|| Unidad == 'C'){
      Temperatura = (Temperatura * (9.0/5.0)) + 32;
      printf("la temperatura en fahrenheit es = %f",Temperatura);

    }
    else if (Unidad == 'f' || Unidad == 'F')
    {
      Temperatura = (Temperatura - 32) / 1.8;
      printf("la temperatura en celsius es = %f",Temperatura);
    }
    else{
        printf("la unidad ingresada es erronea");
    }
    return 0;

}