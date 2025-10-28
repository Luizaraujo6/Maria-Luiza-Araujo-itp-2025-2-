#include <stdio.h>

int main() {
    int M, N;

    // Pede as dimensões do campo
    printf("Informe o número de linhas (M):\n");
    scanf("%d", &M);

    printf("Informe o número de colunas (N):\n");
    scanf("%d", &N);

    int campo[10][10]; // matriz do campo, máximo 10x10 conforme enunciado

    // Lê os valores do campo agrícola
    printf("Informe a matriz do campo (%d linhas, cada uma com %d números):\n", M, N);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%1d", &campo[i][j]); // lê um dígito por vez (0, 1 ou 2)
        }
    }

    int irrigado = 0;    // conta setores férteis irrigados
    int nao_irrigado = 0; // conta setores férteis não irrigados

    // Matriz auxiliar para marcar os setores férteis que foram irrigados
    int marcado[10][10] = {0};

    // Percorre toda a matriz para encontrar os irrigadores (valor 2)
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (campo[i][j] == 2) {
                // Verifica os 4 vizinhos (cima, baixo, esquerda, direita)
                if (i > 0 && campo[i-1][j] == 1) marcado[i-1][j] = 1; // norte
                if (i < M-1 && campo[i+1][j] == 1) marcado[i+1][j] = 1; // sul
                if (j > 0 && campo[i][j-1] == 1) marcado[i][j-1] = 1; // oeste
                if (j < N-1 && campo[i][j+1] == 1) marcado[i][j+1] = 1; // leste
            }
        }
    }

    // Agora conta os férteis irrigados e não irrigados
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (campo[i][j] == 1) {
                if (marcado[i][j] == 1)
                    irrigado++;
                else
                    nao_irrigado++;
            }
        }
    }

    // Mostra os resultados
    printf("Setores férteis irrigados: %d\n", irrigado);
    printf("Setores férteis não irrigados: %d\n", nao_irrigado);

    return 0;
}

