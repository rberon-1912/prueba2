#include <stdio.h>
int main(){
    int montos_compras;
    int monto_a_pagar = 0;
   
    do 
    { 
      printf("ingresa el precio de la compra hecha \n");
      scanf("%d", &montos_compras);  
      if ( montos_compras < 0){
       printf("el numero es invalido, ingrese un entero\n");
      }
        while (montos_compras > 0){
        monto_a_pagar = monto_a_pagar + montos_compras;

        printf("ingresa el precio de la compra hecha \n");
        scanf("%d", &montos_compras);  
      }
    } while (montos_compras < 0);
    
    if (monto_a_pagar >= 1000){
        monto_a_pagar = monto_a_pagar - (monto_a_pagar / 100 * 10);
        printf("el monto total es %d", monto_a_pagar);

    }
    else
       printf("el monto total es %d", monto_a_pagar);
    
    return 0;
}