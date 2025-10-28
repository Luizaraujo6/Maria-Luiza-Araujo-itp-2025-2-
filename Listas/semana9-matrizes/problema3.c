#include <stdio.h>

int main() {
    int M;

    // Pede o número de times
    printf("Informe o número de times no campeonato (M):\n");
    scanf("%d", &M);

    int gols[20][20]; // matriz para armazenar os gols de cada time contra outro

    // Lê os resultados das partidas
    printf("Informe a matriz de resultados (M linhas com M números cada):\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%1d", &gols[i][j]); // lê um dígito por vez
        }
    }

    int empates = 0; // contador de partidas empatadas

    // Percorre apenas metade da matriz para não contar partidas duas vezes
    for (int i = 0; i < M; i++) {
        for (int j = i+1; j < M; j++) {
            if (gols[i][j] == gols[j][i]) { // se os gols forem iguais, é empate
                empates++;
            }
        }
    }

    // Exibe o resultado
    printf("Número de partidas empatadas: %d\n", empates);

    return 0;
}


