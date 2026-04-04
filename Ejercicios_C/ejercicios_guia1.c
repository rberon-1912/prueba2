
#include <stdio.h>
int main() {
    int HORAS_TRABJ,VALOR_HORAS,SUELDO;
    printf("ingresa las horas trabajadas");
    scanf("%i",&HORAS_TRABJ);

    printf("ingresa el valor de las horas");
    scanf("%i",&VALOR_HORAS);

    SUELDO = VALOR_HORAS * HORAS_TRABJ;
    printf("tu sueldo es:%i",SUELDO);
    return 0;
}