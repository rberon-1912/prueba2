#include <stdio.h>
int main(){
    int NUM;
    printf("ingrese un numero entre el 1 y el 7 :");
    scanf("%d", &NUM);
    if (NUM >= 1 && NUM <=7)
    {
        if (NUM == 1){
            printf("hoy es Domingo");
        }
        else if (NUM == 2){
            printf("hoy es Lunes");
        }
        else if (NUM == 3){
            printf("hoy es Martes");
        }
        else if (NUM == 4){
            printf("hoy es Miercoles");
        }
        else if (NUM == 5){
            printf("hoy es Jueves");
        }
        else if (NUM == 6){
            printf("hoy es Viernes");
        }
        else{
            printf("es sabado");
        }
    }
    else {
       printf("el valor ingresado no es valido");}
    return 0;
    
}