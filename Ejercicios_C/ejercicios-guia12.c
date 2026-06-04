#include <stdio.h>
void main(){
    int a,n;
    int elevado = 1;
    int i = 1;

    printf("dar un numero: \n");
    scanf("%d",&a);

    printf("dar un numero: \n");
    scanf("%d",&n);
    for ( i = 0; i < n ; i++)
    {
       printf("%d ,", elevado);
       elevado = elevado * a;
    }
    
    
}