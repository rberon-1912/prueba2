#include <stdio.h>
#define Maximo 100

/* Estructura original del libro */
typedef struct 
{
    int codigo_numerico;
    char Titulo[30];
    char Autor[30];
    float price;
    int cantidad_stock;
} Libro;

/* NUEVA ESTRUCTURA: Para la tabla de pedidos */
typedef struct
{
    int codigo_numerico;
    int cantidad_stock;
    char Titulo[30];
} Pedido;

/* Función para cargar los libros */
void cargar_libros (Libro vec[Maximo], int *codigo_maximo)
{   
    int i = 0;
    int entrada_codigo;
    printf("Ingrese el codigo numerico del libro (0 para finalizar):\n");
    scanf("%d", &entrada_codigo);
    
    while (entrada_codigo != 0 && i < Maximo)
    {
        vec[i].codigo_numerico = entrada_codigo;

        printf("Ingrese el titulo del libro:\n");
        scanf("%s", vec[i].Titulo);

        printf("Ingrese el autor del libro:\n");
        scanf("%s", vec[i].Autor);

        printf("Ingrese el precio del libro:\n");
        scanf("%f", &vec[i].price);

        printf("Ingrese la cantidad en stock del libro:\n");
        scanf("%d", &vec[i].cantidad_stock);

        i++;
        
        if (i < Maximo) 
        {
            printf("\nIngrese el codigo numerico del libro (0 para finalizar):\n");
            scanf("%d", &entrada_codigo);
        }
    }
    *codigo_maximo = i;
}

void mostrar_libro(Libro libro)
{
    printf("\n Libro");
    printf("\n Codigo numerico: %d ", libro.codigo_numerico);
    printf("\n Titulo: %s ", libro.Titulo);
    printf("\n Autor: %s ", libro.Autor);
    printf("\n Precio: %.2f ", libro.price);
    printf("\n Cantidad en stock: %d \n", libro.cantidad_stock);
}

void mostrar_libros(Libro vec[Maximo], int cantidad)
{
    int i;
    for (i = 0; i < cantidad; i++)
    {
        mostrar_libro(vec[i]);
    }
}

void mostrar_libro_mas_caro(Libro vec[Maximo], int cantidad)
{
    int i;
    int indice_caro = 0; 

    if (cantidad > 0) 
    {
        for (i = 1; i < cantidad; i++)
        {
            if (vec[i].price > vec[indice_caro].price)
            {
                indice_caro = i;
            }
        }

        printf("\n\n====================================");
        printf("\n A) EL LIBRO MAS CARO ES:");
        printf("\n====================================");
        mostrar_libro(vec[indice_caro]);
        printf("====================================\n");
    }
}

void mostrar_libros_bajo_stock(Libro vec[Maximo], int cantidad)
{
    int i;
    int contador = 0; 

    printf("\n\n====================================");
    printf("\n B) LIBROS CON STOCK MENOR A 5:");
    printf("\n====================================");

    for (i = 0; i < cantidad; i++)
    {
        if (vec[i].cantidad_stock < 5)
        {
            mostrar_libro(vec[i]);
            contador++;
        }
    }

    if (contador == 0)
    {
        printf("\n No hay libros con stock menor a 5.\n");
    }
    printf("====================================\n");
}

void calcular_valor_inventario(Libro vec[Maximo], int cantidad)
{
    int i;
    float valor_total = 0; 

    for (i = 0; i < cantidad; i++)
    {
        valor_total = valor_total + (vec[i].price * vec[i].cantidad_stock);
    }

    printf("\n\n====================================");
    printf("\n C) VALOR TOTAL DEL INVENTARIO:");
    printf("\n====================================");
    printf("\n El valor total es: $%.2f", valor_total);
    printf("\n====================================\n");
}

/* --- NUEVAS FUNCIONES PARA LOS PEDIDOS --- */

/* Genera la nueva tabla copiando los datos correspondientes */
void generar_tabla_pedidos(Libro libros[Maximo], int cant_libros, Pedido pedidos[Maximo], int *cant_pedidos)
{
    int i;
    int j = 0; /* j lleva la cuenta de cuantos elementos agrego a la nueva tabla */

    for (i = 0; i < cant_libros; i++)
    {
        if (libros[i].cantidad_stock < 5)
        {
            pedidos[j].codigo_numerico = libros[i].codigo_numerico;
            pedidos[j].cantidad_stock = libros[i].cantidad_stock;
            strcpy(pedidos[j].Titulo, libros[i].Titulo);
            j++; 
        }
    }
    
    *cant_pedidos = j;
}

void mostrar_tabla_pedidos(Pedido pedidos[Maximo], int cant_pedidos)
{
    int i;
    
    printf("\n\n");
    printf("\n D) NUEVA TABLA DE PEDIDOS GENERADA:");
    printf("\n");
    
    if (cant_pedidos == 0)
    {
        printf("\n No fue necesario generar pedidos (Stock OK).\n");
    }
    else
    {
        for (i = 0; i < cant_pedidos; i++)
        {
            printf("\n Pedido %d | Codigo: %d | Stock actual: %d", i+1, pedidos[i].codigo_numerico, pedidos[i].cantidad_stock);
        }
        printf("\n");
    }
    printf("\n\n");
}

int main(){
    /* Tabla original */
    Libro libro[Maximo];
    int codigo_maximo = 0;
    
    /* Nueva tabla solicitada */
    Pedido tabla_pedidos[Maximo];
    int cantidad_pedidos = 0;
    
    cargar_libros(libro, &codigo_maximo);
    
    printf("\n LISTADO GENERAL DE LIBROS ");
    mostrar_libros(libro, codigo_maximo);
    
    /* Llamadas a los incisos anteriores */
    mostrar_libro_mas_caro(libro, codigo_maximo);
    mostrar_libros_bajo_stock(libro, codigo_maximo);
    calcular_valor_inventario(libro, codigo_maximo);
    
    /* Llamadas al nuevo inciso (Generar tabla y mostrarla) */
    generar_tabla_pedidos(libro, codigo_maximo, tabla_pedidos, &cantidad_pedidos);
    mostrar_tabla_pedidos(tabla_pedidos, cantidad_pedidos);
    
    return 0;
}