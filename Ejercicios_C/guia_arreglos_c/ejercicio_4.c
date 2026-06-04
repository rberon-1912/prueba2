#include <stdio.h>
#define filas 3
#define columnas 4
void main(){
    int matriz[filas][columnas];
    int i,j;
    for ( i = 0; i < filas; i++)
    {
        for (j=0; j<columnas; j++){
            printf("Ingrese el valor para la posicion [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for ( i = 0; i < filas; i++)
    {
        for ( j = 0; j < columnas; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    
}