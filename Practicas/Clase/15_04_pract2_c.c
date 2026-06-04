//*Escribir una función que dado un tiempo expresado en segundos, devuelva
//por parámetros el equivalente en días, horas, minutos y segundos.
//Utilizar esta función dentro de un programa que solicite el valor al usuario.
//Se debe validar que el valor ingresado sea entero positivo, de lo contrario,
//deberá mostrarse el mensaje: “Valor ingresado inválido”.
#include <stdio.h> 
void declara_tiempo(int segundos, int *dias, int *horas, int *minutos, int *segundos_restantes) {
    *dias = segundos / 86400;
    segundos %= 86400;
    *horas = segundos / 3600;
    segundos %= 3600;
    *minutos = segundos / 60;
    *segundos_restantes = segundos % 60;
}
int main() {
    int segundos, dias, horas, minutos, segundos_restantes;

    printf("Ingrese el tiempo en segundos: ");
    scanf("%d", &segundos);
    
    if (segundos < 0) {
        printf("Valor ingresado inválido ");
    }
    else {
    declara_tiempo(segundos, &dias, &horas, &minutos, &segundos_restantes);

    printf("%d segundos equivalen a %d días, %d horas, %d minutos y %d segundos ",
           segundos, dias, horas, minutos, segundos_restantes);
        }

    return 0;
}
