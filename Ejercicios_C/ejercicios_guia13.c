#include <stdio.h>
void main(){
    int num,factorial = 1;
    int i;
    printf("ingrese un numero\n");
    scanf("%d", &num);
    for ( i=1 ; i <= num ; i++){
        factorial = factorial * i;
        
    }
    printf("%d, " ,factorial);
}