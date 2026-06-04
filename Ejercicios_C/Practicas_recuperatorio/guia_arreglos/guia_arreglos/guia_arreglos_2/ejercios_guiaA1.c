/*  EJERCICIO1
#include <stdio.h>
#define MAX 100
typedef float vector_20[MAX];

void mostar_numeros(vector_20 Vec, int ml){
    int i;
    for (i = 0; i < ml; i++)
    {
       printf("numero= %f, poscicion= %d \n", Vec[i], i + 1);
    }
    
}
void main(){
    int ml,i;
    float num;
    vector_20 serie_num;

    printf("ingrese un numero que sera el maximo fisico de la serie");
    scanf("%d", &ml);

    if (ml <= 100 && ml > 0){
        for (i=0;i<=ml;i++){
            printf("ingrese un numero para la serie de %d numeros reales",ml);
            scanf("%f", &num);
            serie_num[i]=num;
        }
        mostar_numeros(serie_num, ml);
    }
    else{
        printf("error de rango de valor");
        
    }
   
} 
    EJERCICIO2
#include <stdio.h>
#define MAX 1000

typedef float vector_1000 [MAX];

void mostrar_sucesion(vector_1000 sucesion, int ml){
    int i;
    printf("  serie de numeros  ");

    for(i=0; i<ml ; i++){
        printf("numero= %0.2f posicion= %d", sucesion[i],i + 1);
    }
}

void main(){
    vector_1000 Serie_numeros;
    int i = 0;
    int ml;
    float num;
    while ( i <= MAX && num!=0)
    {
        printf("agregar un numero a la sucesion");
        scanf("%f", &num);
        Serie_numeros[i] = num;
        i++;
    };
    ml = i;
    mostrar_sucesion(Serie_numeros,ml);
    
}
     EJERCICIO3
#include <stdio.h> 
#define MAX 1000
typedef float Vector_sucesion[MAX];

void mostar_sucesion(Vector_sucesion Vec, int Max, int cant)
   {
    int j;
    printf("cantidad de numeros= %d \n", cant);
    for (j=0 ; j<Max ; j++){
        if(Vec[j] != 0){
            printf("posicion = %d numero= %0.2f \n", j + 1 ,Vec[j]);
        };
    };
   }

void main(){
   Vector_sucesion vec_sucesion_ix;
   int numE,i;
   float numR;
   int cantidad = 0;

   for(i=0;i<MAX;i++){
       vec_sucesion_ix[i]= 0;
   };

   printf(" ingrese un numero Entero para ser el indice del vector ");
   scanf("%d",&numE);

   printf(" ingrese un numero Real para meter en la sucesion");
   scanf("%f",&numR);

   while (numE >= 0 && numE <= 999 && numR != -1){
       vec_sucesion_ix[numE] = numR;
       cantidad++;
       printf(" ingrese un numero Entero para ser el indice del vector ");
       scanf("%d",&numE);

       printf(" ingrese un numero Real para meter en la sucesion");
       scanf("%f",&numR);

    };
   mostar_sucesion(vec_sucesion_ix,MAX,cantidad);
   return;

} ejercicio4
#include <stdio.h>
#define MF 100
typedef float vec_serie[MF];

void invertir_vector(vec_serie vec,int ml){
    int i;
    vec_serie aux;
    printf("lista de numeros invertida \n");
    for(i=0;i<ml;i++){
        aux[i]= vec[ml-1-i];
        printf("posicion = %d numero = %0.2f \n", i+1, aux[i]);
    }
    return;
}

void main(){
    vec_serie serie_num;
    float num;
    int i = 0;
    int ml;
    printf("ingrese un numero real positivo y 0 para salir");
    scanf("%f",&num);
    while (i<=MF && num>0)
    {
        serie_num[i] = num;
        printf("ingrese un numero real positivo y 0 para salir");
        scanf("%f",&num);
        i++;
    }
    ml=i;
    invertir_vector(serie_num,ml);
    return;
}EJERCICIO 5
#include <stdio.h>
#define MAX 100
typedef float Vector_100[MAX];

void cargar_sucesion(Vector_100 vec, int *i){
     *i = 0;
     float num;
     printf("agrega un numero real, 0 para salir");
     scanf("%f", &num);
     while (*i < MAX && num != 0){
        vec[*i] = num;
        (*i)++;
        printf("agrega un numero real, 0 para salir");
        scanf("%f", &num);
        
     }
}
void max_num_vector(Vector_100 vec, int i){
    int j;
    float num_mayor = 0;
    int apariciones = 1;
    for(j=0;j<i;j++){
       if (vec[j]>num_mayor){
          num_mayor=vec[j];
        }
    }
    printf("\n el numero mayor es: %0.2f \n", num_mayor);
    printf("posicion de aparicion: \n");

    for(j=0;j<i;j++){
        if (vec[j]==num_mayor){
            apariciones++;
            printf("%d\n",j+1);
            
        }
    }

    printf("aparece %d veces", apariciones);
}

void main (){
   Vector_100 sucesion_reales;
   int cantidad= 0;
   cargar_sucesion(sucesion_reales, &cantidad);
   printf("se cargaron %d numeros a la sucerion",cantidad);
   max_num_vector(sucesion_reales, cantidad);
}ejercicio 6
#include <stdio.h>

void Vector_fun(int Vector[],int ml,int *valor_neg,int *valor_positivos){
    *valor_neg=0;
    *valor_positivos=0;
    int i;

    for (i=0; i < ml ;i++)
    {
        if (Vector[i] > 0){
           (*valor_positivos)++;}
        else if (Vector[i] < 0){
            (*valor_neg)++;
        }
    }
}
int main(){
    int vector1[]= {2,8,1,-5,4};
    int ml = 5 ;
    int cant_neg;
    int cant_pos;
    Vector_fun(vector1,ml,&cant_neg,&cant_pos);
    printf("Resultados del test:\n");
    printf("Negativos: %d\n", cant_neg);
    printf("Positivos: %d\n", cant_pos);
} ejerccio 7
#include <stdio.h>
#define MAX 10

void insentar_valor(int vector[],int *ml,int p){
    int i,aux;
    if(*ml < MAX){
        printf("\nhay espacio \n");
      i = *ml-1;
      while (i>=0 && vector[i]>p)
      {
        vector[i+1]=vector[i];
        i--;
      }
      vector[i+1]=p;
      (*ml)++;
    }
    else{
        printf("el vector no tiene espacio");
    }
}
void main(){
  int vector[MAX]={3,6,9,16,21,45};
  int p = 14;
  int ml = 6;
  int i;
  printf("vector actual:\n");
  for(i=0;i<ml;i++){
    printf("%d, ",vector[i]);
  }
  insentar_valor(vector,&ml,p);
  printf("vector con valor p incluido: \n");
  for(i=0;i<ml;i++){
    printf("%d, ",vector[i]);
  }

}ejercicio 8*/

#include <stdio.h>
#include <stdbool.h>
#define MAX 1000

typedef int vector_t[MAX];

void ver_orden(vector_t vec, int ml, bool *esta_ordenado, int *diferencia_menor){
    *esta_ordenado = true;
    *diferencia_menor = 999999;
    int aux;
    int i = 0;
    while (i<ml-1 && *esta_ordenado == true){
        if (vec[i]>vec[i+1]){
           *esta_ordenado = false;
        }else{
            if (vec[i] != vec[i+1]){
                aux = vec[i+1]-vec[i];
                    if(aux < *diferencia_menor){
                        *diferencia_menor=aux;
                    }
                }
         }
        i++;
    }
}

void main(){
    int ml = 7;
    vector_t sucesion={15,18,20,27,28,46,70};
    bool esta_ordenado;
    int diferencia_menor;

    ver_orden(sucesion,ml,&esta_ordenado,&diferencia_menor);
    printf("%d, %d", esta_ordenado,diferencia_menor);
}
