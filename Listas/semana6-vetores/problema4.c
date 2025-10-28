#include <stdio.h>

int main() {
    int v[10], visitadas[10]; 

    // Inicializa todas como não visitadas
    for(int i = 0; i < 10; i++) {
        visitadas[i] = 0;
    }

    // Leitura das sugestões dos nativos
    for(int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    int atual = 0; // começa na ilha 0

    while(1) {
        if(visitadas[atual] == 1) {
            // encontrou a primeira ilha visitada duas vezes
            printf("%d\n", atual);
            break;
        }

        visitadas[atual] = 1;    // marca como visitada
        atual = v[atual];        // vai para a próxima ilha
    }

    return 0;
}

