#include <stdio.h>
int main(){
    int Numero_N,i;
    int sucesion = 1 ;
    printf("pon un numero que sera la terminos por los que se multiplicara la sucesion geometrica de razon 3: \n");
    scanf("%d", &Numero_N);
    for (i = 1; i <= Numero_N; i++)
    {   
        printf( "%d , " , sucesion);
        sucesion = i * 3;
        
    }
    return 0;
    
}