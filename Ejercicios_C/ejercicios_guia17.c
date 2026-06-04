#include <stdio.h>
void main (){
    int altura,i,j;
    printf("pon una altura para la torre:\n");
    scanf("%d", &altura);
    for ( i = 1; i <= altura; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return;
}
