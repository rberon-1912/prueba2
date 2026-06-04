#include <stdio.h>
int main(){
    int i,n,multiplicacion;
    for (i=1;i<=100;i++){
      for ( n= 1; n <= 9; n++)
      {
        multiplicacion = i*n;
        printf("%d, ",multiplicacion);
      }
      printf("\n");
 
    }
    return 0;
}