#include <stdio.h>
#include <stdbool.h>
bool multiplo(int a,int b){
    bool multiplo;
     if(b % a == 0){
        multiplo = true;
     }
     else{
        multiplo = false;
     }
     return multiplo;
   }
void main(){
    bool multiplos;
    int n;
    int multiplos_2 =0;
    int multiplos_3 =0;
    int multiplos_5=0;
    int multiplos_7=0;
    printf("escribe una seire de numero, para terminar ingresar 0  ");
    scanf("%d",&n);
    if (n == 0)
       {
        printf("no se ingreso ningun valor");
       }
    else{
       while (n != 0)
       {
        scanf("%d",&n);
        printf("escribe otro numero, para terminar ingresar 0  ");
        if (n % 2 == 0){
            multiplos_2 +=1;
        }
        if (n % 3 == 0)
        {
           multiplos_3 +=1;
        }
        if (n % 5 == 0)
        {
            multiplos_5 +=1;
        }
        if (n % 7 == 0)
        {
            multiplos_7 +=1;
        }
    
       }
       printf("nunmero ingresado:%d \n cantidad de multiplos de 2: %d \n cantidas de multiplos de 3:%d \n cantidad de multiplos de 5:%d \n cantidad de mulrtilpos de 7:%d", n,multiplos_2,multiplos_3,multiplos_5,multiplos_7);
       multiplos= multiplo(3,18);
       if (multiplos){
         printf("true");
       }
       else{
        printf("false");
       }
    }
    return;
}