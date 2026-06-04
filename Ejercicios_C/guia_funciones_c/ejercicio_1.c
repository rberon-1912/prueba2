//empezamos creando una funcion 
#include <stdio.h>
int function_suma(int n){
    int i;
    int resultado = 0;
    for (i=1 ; i<=n ; i++){
        resultado = (resultado + i);
    }
    return resultado;
}
void main(){
    int resultado;
    resultado=function_suma(12);
    printf("%d",resultado);
    return;
}