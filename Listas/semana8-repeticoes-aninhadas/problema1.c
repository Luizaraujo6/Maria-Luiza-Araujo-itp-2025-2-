#include <stdio.h>

int main() {
    int m, n;                     // m = números sorteados, n = números apostados
    int sorteados[30];            // vetor com os números sorteados (máx. 30)
    int aposta[50];               // vetor com os números apostados (máx. 50)
    int i, j;                     // contadores
    int acertos = 0;              // contador de acertos

    // Lê a quantidade de números sorteados e apostados
    printf("Numeros sorteados e apostados:\n");
    scanf("%d %d", &m, &n);

    // Lê os números sorteados
    for (i = 0; i < m; i++) {
        scanf("%d", &sorteados[i]);
    }

    // Lê os números apostados
    for (i = 0; i < n; i++) {
        scanf("%d", &aposta[i]);
    }

    // Compara cada número da aposta com os sorteados
    for (i = 0; i < n; i++) {           // percorre a aposta
        for (j = 0; j < m; j++) {       // percorre os sorteados
            if (aposta[i] == sorteados[j]) {
                acertos++;              // encontrou um número igual
                break;                  // evita contar o mesmo número mais de uma vez
            }
        }
    }

    // Mostra o total de acertos
    printf("%d\n", acertos);

    return 0;
}
