#include <stdio.h>
int main (){
    int a,m,d;
    printf("agregue un año,mes y dia: \n");
    scanf("%d %d %d", &a,&m,&d);
    if (m <= 12) {
    printf("el mes es valido: \n");

    // Caso 1: Meses de 30 días
    if (m == 4 || m == 6 || m == 9 || m == 11) {
        if (d <= 30) printf("es valido el dia\n");
        else printf("Error: Este mes solo tiene 30 dias\n");
    }
    // Caso 2: Febrero (El caso especial)
    else if (m == 2) {
        // Condicion de bisiesto
        if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
            if (d <= 29) printf("es valido el dia (año bisiesto)\n");
            else printf("Error: Febrero bisiesto solo tiene 29 dias\n");
        } else {
            if (d <= 28) printf("es valido el dia\n");
            else printf("Error: Este febrero solo tiene 28 dias\n");
        }
    }
    // Caso 3: Meses de 31 días (el resto)
    else {
        if (d <= 31) printf("es valido el dia\n");
        else printf("Error: El dia no puede ser mayor a 31\n");
    }
    }
    
    
}