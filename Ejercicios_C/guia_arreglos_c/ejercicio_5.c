#include <stdio.h>
#define filas 5
#define columnas 5
void main(){
    int matraz[filas][columnas];
    int i,j;
    for ( i = 0; i < filas; i++)
    {
        for ( j = 0; j < columnas; i++)
        {
            printf("%d\t", matraz[i][j]);
        }
        printf("\n");
        
    }
    
}