#include <stdio.h>

void convertir_tiempo(long total_seg, int *d, int *h, int *m, int *s) {
    long resto;

    // Calculamos los dias
    *d = total_seg / 86400;
    resto = total_seg % 86400;

    // De lo que sobro, calculamos las horas
    *h = resto / 3600;
    resto = resto % 3600;

    // De lo que sobro, calculamos los minutos
    *m = resto / 60;

    // Lo que sobra finalmente son los segundos
    *s = resto % 60;
    return;
}
void main(){
    int dia,hora,min,seg;
    long segundos = 344534;
    convertir_tiempo(segundos,&dia,&hora,&min,&seg);
    printf ("el tiempo= %d:%d:%d:%d", dia,hora,min,seg);
    return;
}
