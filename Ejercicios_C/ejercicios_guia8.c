#include <stdio.h>
int main(){
    int NUM;
    printf("ingrese el numero de un mes del año");
    scanf("%d", &NUM);
    if (NUM >= 1 && NUM <= 12)
    {
        if (NUM == 1){
            printf("es el mes de enero");
        }
        else if (NUM == 2){
            printf("es el mes de febrero");
        }
        else if (NUM == 3){
            printf("es el mes de marzo");
        }
        else if (NUM == 4){
            printf("es el mes de abril");
        }
        else if (NUM == 5){
            printf("es el mes de mayo");
        }
        else if (NUM == 6){
            printf("es el mes de junio");
        }
        else if (NUM == 7){
            printf("es el mes de julio");
        }
        else if (NUM == 8){
            printf("es el mes de agosto");
        }
        else if (NUM == 9){
            printf("es el mes de septiembre");
        }
        else if (NUM == 10){
            printf("es el mes de octubre");
        }
        else if (NUM == 11){
            printf("es el mes de noviembre");
        }
        else {
            printf("es diciembre");
        }
    
    }
    else{
        printf("el valor es invalido");
    }
    return 0;
}