#include <stdio.h>
#define ML 100
void main(){
    float lista_numeros[ML];
    int i,n;
    printf("ingresa la cantidad de elementos");
    scanf("%d",&n);
    for (i=0; i<n; i++){
       printf("ingrese el numero para la posicion:%d", i +1);
       scanf("%f",&lista_numeros[i]);
    }
    for (i=0; i<n; i++){
        printf("posicion %d:%.2f", i + 1,lista_numeros[i]);
        
    }
    return;
}