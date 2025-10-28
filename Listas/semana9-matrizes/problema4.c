#include <stdio.h>

int main() {
    int M;

    // Pede o número de cidades
    printf("Informe o número de cidades (M):\n");
    scanf("%d", &M);

    int preco[10][10]; // matriz de preços, máximo 10x10

    // Lê a matriz de preços das passagens
    printf("Informe a matriz de preços (M linhas de M números cada):\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%1d", &preco[i][j]); // lê um dígito por vez
        }
    }

    int X, Z;

    // Pede a cidade de origem
    printf("Informe a cidade de origem (X):\n");
    scanf("%d", &X);

    // Pede a cidade de destino
    printf("Informe a cidade de destino (Z):\n");
    scanf("%d", &Z);

    int menor_custo = preco[X][Z]; // considera voo direto inicialmente
    int intermediaria = -1; // -1 indica que não usou cidade intermediária

    // Testa todas as cidades intermediárias possíveis
    for (int Y = 0; Y < M; Y++) {
        if (Y == X || Y == Z) continue; // não pode ser origem ou destino
        int custo = preco[X][Y] + preco[Y][Z]; // custo passando por Y
        if (menor_custo == 0 || custo < menor_custo) { // atualiza se for menor
            menor_custo = custo;
            intermediaria = Y;
        }
    }

    // Mostra o resultado
    if (intermediaria == -1) {
        printf("%d-%d R$%d\n", X, Z, menor_custo);
    } else {
        printf("%d-%d-%d R$%d\n", X, intermediaria, Z, menor_custo);
    }

    return 0;
}

