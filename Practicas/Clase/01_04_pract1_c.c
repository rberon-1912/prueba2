#include <stdio.h>
int
main() {
    int altura, base ,area;

    printf("mandar un numero para la base: ");
    scanf("%i", &altura);

    printf("mandar un numero para la altura: ");
    scanf("%i", &base);

    area = (altura * base)/2;
    printf("El area es: %i", area);

    return 0;
}