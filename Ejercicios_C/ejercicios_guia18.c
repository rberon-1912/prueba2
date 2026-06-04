#include <stdio.h>

int main() {
    int resp_x, resp_y;
    int continuar = 1;
    
    // Inicializamos todos los contadores en 0
    int total_encuestados = 0;
    int cont_x = 0, cont_y = 0;
    int cont_solo_x = 0, cont_solo_y = 0;
    int cont_ambos = 0, cont_ninguno = 0;

    printf("--- ENCUESTA DE PRODUCTOS ---\n");
    printf("Responda con 1 (SI) o 0 (NO)\n\n");

    while (continuar == 1) {
        printf("Encuestado #%d:\n", total_encuestados + 1);
        
        printf("¿Consume el producto X? (1/0): ");
        scanf("%d", &resp_x);
        
        printf("¿Consume el producto Y? (1/0): ");
        scanf("%d", &resp_y);

        // Sumamos 1 al total de encuestados
        total_encuestados++;

        // --- LÓGICA DE CONTADORES GLOBALES (Incisos a y b) ---
        if (resp_x == 1) {
            cont_x++;
        }
        if (resp_y == 1) {
            cont_y++;
        }

        // --- LÓGICA CRUZADA (Incisos c, d, e, f) ---
        if (resp_x == 1 && resp_y == 1) {
            cont_ambos++;
        } 
        else if (resp_x == 1 && resp_y == 0) {
            cont_solo_x++;
        } 
        else if (resp_x == 0 && resp_y == 1) {
            cont_solo_y++;
        } 
        else if (resp_x == 0 && resp_y == 0) {
            cont_ninguno++;
        }

        // Preguntamos si queremos cargar otra encuesta
        printf("\n¿Desea ingresar otra encuesta? (1 = SI, 0 = NO): ");
        scanf("%d", &continuar);
        printf("-----------------------------\n");
    }

    // --- CÁLCULO Y MUESTRA DE PORCENTAJES ---
    // Verificamos que haya al menos 1 encuestado para no dividir por cero
    if (total_encuestados > 0) {
        printf("\n--- RESULTADOS (Sobre %d encuestados) ---\n", total_encuestados);
        
        // Multiplicamos por 100.0 para forzar el resultado a float y no perder decimales
        printf("a) Consumen X: %.2f%%\n", (cont_x * 100.0) / total_encuestados);
        printf("b) Consumen Y: %.2f%%\n", (cont_y * 100.0) / total_encuestados);
        printf("c) Solo consumen X: %.2f%%\n", (cont_solo_x * 100.0) / total_encuestados);
        printf("d) Solo consumen Y: %.2f%%\n", (cont_solo_y * 100.0) / total_encuestados);
        printf("e) Consumen ambos: %.2f%%\n", (cont_ambos * 100.0) / total_encuestados);
        printf("f) No consumen ninguno: %.2f%%\n", (cont_ninguno * 100.0) / total_encuestados);
    } else {
        printf("No se ingresaron datos.\n");
    }

    return 0;
}