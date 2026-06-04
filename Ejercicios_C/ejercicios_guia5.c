//ejercicio de condicional basico
#include <stdio.h>
void main(){
    int NUM;
    printf("ingrese un numero:");
    scanf("%d", &NUM);
    if (NUM == 0){
       printf("el numro es 0");} 
    else { 
       if (NUM % 2 == 0 && NUM != 0)  {
           printf("el numero es par \n"); }
       else {
           printf("el numero es impar \n");}
       if (NUM > 0){
           printf("el numero es positivo");
        }
       else {
            printf("el numero es Impar");
        }
      }
    return;

 
   
      
       
}