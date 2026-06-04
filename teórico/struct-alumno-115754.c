#include <stdio.h>
#include <string.h>

#define TAMANIO 2

/* definimos una estructura alumno */
typedef struct  
{
     char nombre[30];
     int padron;
     char email[50];
     int notas[2] ;
     float promedio;
} alumno;

void cargar(alumno vec[TAMANIO])
{
    int i;
    for(i=0;i<TAMANIO;i++)
    {
        printf("\nIngrese el Nombre:\n");
        scanf("%s",vec[i].nombre);

        printf("Ingrese el padron:\n");
        scanf("%d",&vec[i].padron);

        printf("Ingrese el email:\n");
        scanf("%s",vec[i].email);

        printf("Ingrese la nota del Parcial 1:\n");
        scanf("%d",&vec[i].notas[0]);

        printf("Ingrese la nota del Parcial 2:\n");
        scanf("%d",&vec[i].notas[1]);

	vec[i].promedio = (float)(vec[i].notas[0] + vec[i].notas[1])/2;
    }
    return;
}

void mostrar(alumno vec[TAMANIO])
{
    int i;
    for(i=0;i<TAMANIO;i++)
    {
 	printf("\n\n Alumnos[%d]",i);
	printf("\n nombre: %s ", vec[i].nombre);
	printf("\n padron: %d ", vec[i].padron);	
	printf("\n email: %s ", vec[i].email);
	printf("\n Nota Parcial 1: %d Nota Parcial 2: %d", vec[i].notas[0],vec[i].notas[1]);
	printf("\n promedio Cd: %.2f ", vec[i].promedio);
    }
    return;
}
void mostrar_mejor_promedio(alumno vec[TAMANIO])
{
    int i;
    int indice_mejor = 0; // Asumimos inicialmente que el primero es el mejor
    // Empezamos a comparar desde el segundo elemento (i=1)
    for(i=1; i<TAMANIO; i++){
        // Si encontramos un promedio mayor, actualizamos el índice
        if (vec[i].promedio > vec[indice_mejor].promedio){
            indice_mejor = i;
        } 
    }
    
    // Mostramos los datos del alumno ganador
    printf("\n\n");
    printf("\n EL ALUMNO CON EL MEJOR PROMEDIO ES:");
    printf("\n");
    printf("\n Nombre: %s", vec[indice_mejor].nombre);
    printf("\n Padron: %d", vec[indice_mejor].padron);
    printf("\n Email: %s", vec[indice_mejor].email);
    printf("\n Promedio: %.2f", vec[indice_mejor].promedio);
    printf("\n\n");
    return;
}
void mostrar_promedio_general(alumno vec[TAMANIO])
{
    int i;
    int promedio_general = 0;
    for(i=1; i<TAMANIO; i++){
        promedio_general += vec[i].notas[0];
    }
    printf( "el promedio general es %.2f" , (float) promedio_general / TAMANIO);
    return;
}

void ordenar_por_padron(alumno vec[TAMANIO])
{
    int i, j;
    alumno aux;

    for(i=0; i<TAMANIO-1; i++)
    {
        for(j=0; j<TAMANIO-i-1; j++)
        {
            if(vec[j].padron > vec[j+1].padron)
            {
                aux = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = aux;
            }
        }
    }
    printf("\n La lista ha sido ordenada por padron de forma ascendente. \n");
    return;
}

void buscar_por_padron(alumno vec[TAMANIO])
{
    int padron_buscado;
    int i = 0;
    int encontrado = 0; 

    printf("\nIngrese el numero de padron que desea buscar: ");
    scanf("%d", &padron_buscado);

    /* Usamos un while que evalúa dos condiciones: no pasarse del límite y no haberlo encontrado aún */
    while(i < TAMANIO && encontrado == 0)
    {
        if(vec[i].padron == padron_buscado)
        {
            printf("\n");
            printf("\n ALUMNO ENCONTRADO:");
            printf("\n");
            printf("\n Nombre: %s", vec[i].nombre);
            printf("\n Padron: %d", vec[i].padron);
            printf("\n Email: %s", vec[i].email);
            printf("\n Notas: P1: %d | P2: %d", vec[i].notas[0], vec[i].notas[1]);
            printf("\n Promedio: %.2f", vec[i].promedio);
            printf("\n\n");
            
            encontrado = 1; 
        }
        i++; 
    }

    if(encontrado == 0)
    {
        printf("\nNo se encontro ningun alumno con el padron %d.\n", padron_buscado);
    }
    return;
}

int main(void)
{
    alumno Alumnos[TAMANIO];

    // cargo los elementos con funcion cargar
    cargar(Alumnos);

 	/* Muestro datos del primer elemento de la tabla*/
    mostrar(Alumnos);

    mostrar_mejor_promedio(Alumnos);

    mostrar_promedio_general(Alumnos);

    ordenar_por_padron(Alumnos);

    mostrar(Alumnos);

    buscar_por_padron(Alumnos);

	printf("\n\n");

	return 0;
}
