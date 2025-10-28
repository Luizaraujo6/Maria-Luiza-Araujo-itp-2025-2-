#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int terreno[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &terreno[i]);
    }

    // Encontrar a altura máxima
    int max = terreno[0];
    for(int i = 1; i < n; i++) {
        if(terreno[i] > max) {
            max = terreno[i];
        }
    }

    // Encontrar os índices das duas ocorrências do ponto mais alto
    int primeiro = -1, segundo = -1;
    for(int i = 0; i < n; i++) {
        if(terreno[i] == max) {
            if(primeiro == -1)
                primeiro = i;
            else {
                segundo = i;
                break; // encontramos os dois
            }
        }
    }

    // Comprimento da ponte é a distância entre os índices
    int comprimento = segundo - primeiro;
    printf("%d\n", comprimento);

    return 0;
}
