#include <stdio.h>

int main() {
    int m, n;

    // Leitura da quantidade total e quantidade que possui
    scanf("%d %d", &m, &n);

    int possui[m+1]; // vetor para marcar figurinhas (1 a m)
    for(int i = 1; i <= m; i++) {
        possui[i] = 0; // inicializa todas como não possuídas
    }

    // Leitura das figurinhas que possui
    int fig;
    for(int i = 0; i < n; i++) {
        scanf("%d", &fig);
        possui[fig] = 1; // marca como possuída
    }

    // Imprime as figurinhas faltantes em ordem crescente
    for(int i = 1; i <= m; i++) {
        if(possui[i] == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}


