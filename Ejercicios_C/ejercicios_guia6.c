#include <stdio.h>
void main(){
    int num1,num2,num3;
    printf("ingrese 3 numeros:");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    if (num1 > num2 && num1 > num3){
        printf("el numero %d es el mayor ", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("el numero %d es el mayor", num2);    
    }
    else if (num3 > num1 && num3 > num2)
    {
        printf("EL NUMERO %d ES EL MAYOR", num3);
    }
    return;
    
}