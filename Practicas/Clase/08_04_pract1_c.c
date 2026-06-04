#include <stdio.h>
int main()
{
 int divisor,N,i;
 printf("Ingrese un numero entero: ");
 scanf("%d",&N);
 divisor=0;
 for(i=2;i<N;i++)
  if (N%i==0)
   divisor++;
    if (divisor>0)
     printf("El numero %d no es primo",N);
    else
     printf("El numero %d es primo",N);
 return 0;

}

#include <stdio.h>
#include <stdbool.h>

int main() {
    int N, i;
    bool EsPrimo;
    
    printf("Ingrese un Número: ");
    scanf("%i", &N);
    
    EsPrimo = true;
    i = 2;
    
    while (i <= N/2 && EsPrimo) {
        if (N % i == 0) {
            EsPrimo = false;
        } else {
            i++;
        }
    }
        
    if (EsPrimo) {
        printf("Es primo\n");
    } else {
        printf("No es primo\n");
    }
    
    return 0;
}