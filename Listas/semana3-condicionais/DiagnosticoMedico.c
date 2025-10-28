#include <stdio.h>

int main() {
    char febre, dor_cabeca, dor_corpo, tosse;

    printf("Tem febre? (s/n): ");
    scanf(" %c", &febre);

    printf("Tem dor de cabeca? (s/n): ");
    scanf(" %c", &dor_cabeca);

    printf("Tem dor no corpo? (s/n): ");
    scanf(" %c", &dor_corpo);

    printf("Tem tosse? (s/n): ");
    scanf(" %c", &tosse);

    if (febre == 's' && dor_cabeca == 's' && dor_corpo == 's' && tosse == 'n') {
        printf("Possivel gripe.\n");
    } else if (febre == 's' && tosse == 's' && dor_cabeca == 'n' && dor_corpo == 'n') {
        printf("Possivel resfriado.\n");
    } else if (dor_cabeca == 's' && febre == 'n' && dor_corpo == 'n' && tosse == 'n') {
        printf("Possivel enxaqueca.\n");
    } else if (febre == 's' && dor_cabeca == 'n' && dor_corpo == 'n' && tosse == 'n') {
        printf("Consulte um medico.\n");
    } else if (febre == 'n' && dor_cabeca == 'n' && dor_corpo == 'n' && tosse == 'n') {
        printf("Voce parece estar bem.\n");
    } else {
        printf("Consulte um medico para avaliacao.\n");
    }

    

    return 0;
}