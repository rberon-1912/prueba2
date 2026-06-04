#include <stdio.h>

int main() {
    int dia, mes, anio, dni;
    // Variables para guardar los datos de la persona más joven que encontremos
    int dia_joven, mes_joven, anio_joven, dni_joven;

    printf("--- INGRESO DE DATOS ---\n");
    printf("Ingrese el DIA de nacimiento (0 para finalizar): ");
    scanf("%d", &dia);

    // Si el usuario ingresa 0 en el primer intento, no hay nada que calcular
    if (dia == 0) {
        printf("No se ingresaron datos al sistema.\n");
    } else {
        // Leemos el resto de los datos de la PRIMERA persona
        printf("Ingrese el MES de nacimiento: ");
        scanf("%d", &mes);
        printf("Ingrese el ANIO de nacimiento: ");
        scanf("%d", &anio);
        printf("Ingrese el numero de DNI: ");
        scanf("%d", &dni);

        // Como es la única persona hasta ahora, es la más joven por defecto
        dia_joven = dia;
        mes_joven = mes;
        anio_joven = anio;
        dni_joven = dni;

        // Pedimos el dia de la siguiente persona para ver si entramos al bucle
        printf("\nIngrese el DIA de la siguiente persona (0 para finalizar): ");
        scanf("%d", &dia);

        // El bucle se repite mientras el dia ingresado NO sea 0
        while (dia != 0) {
            printf("Ingrese el MES de nacimiento: ");
            scanf("%d", &mes);
            printf("Ingrese el ANIO de nacimiento: ");
            scanf("%d", &anio);
            printf("Ingrese el numero de DNI: ");
            scanf("%d", &dni);

            // --- LÓGICA PARA VER SI ES MÁS JOVEN (FECHA MAYOR) ---
            
            // 1. Si nació en un año posterior, es más joven
            if (anio > anio_joven) {
                dia_joven = dia;
                mes_joven = mes;
                anio_joven = anio;
                dni_joven = dni;
            } 
            // 2. Si nacieron el mismo año, revisamos el mes
            else if (anio == anio_joven) {
                
                if (mes > mes_joven) { // Mes posterior = más joven
                    dia_joven = dia;
                    mes_joven = mes;
                    anio_joven = anio;
                    dni_joven = dni;
                } 
                // 3. Si nacieron el mismo año y mismo mes, revisamos el día
                else if (mes == mes_joven) {
                    
                    if (dia > dia_joven) { // Día posterior = más joven
                        dia_joven = dia;
                        mes_joven = mes;
                        anio_joven = anio;
                        dni_joven = dni;
                    }
                }
            }

            // Volvemos a pedir el dia al final de la vuelta para evaluar el while
            printf("\nIngrese el DIA de la siguiente persona (0 para finalizar): ");
            scanf("%d", &dia);
        }

        // Una vez finalizado el bucle, imprimimos el DNI guardado
        printf("\n--- RESULTADO ---\n");
        printf("El DNI de la persona mas joven es: %d\n", dni_joven);
    }

    return 0;
}