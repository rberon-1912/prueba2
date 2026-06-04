#include <stdio.h>
void fecha_funcion(int a, int *aaaa , int *mm , int *dd){
    *aaaa = a / 10000;
    *mm = (a / 100) % 100;
    *dd = a % 100;
}
int main(){
    int fecha=20061219;
    int año,mes,dia;
    fecha_funcion( fecha, &año, &mes, &dia );
    printf("la fecha de hoy es: dia= %d mes= %d año= %d", dia,mes,año);
    return 0;
}