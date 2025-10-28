#include <stdio.h>

int main() {
    int M;

    // pede a quantidade de usuários
    printf("Informe o número de usuários cadastrados (M):\n");
    scanf("%d", &M);

    int amizades[100][100]; // matriz de amizades (máximo 100x100)
    
    // lê a matriz de amizades
    printf("Informe a matriz de amizades (%d linhas de %d números cada, 0 ou 1):\n", M, M);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%1d", &amizades[i][j]); // lê um dígito por vez
        }
    }

    int x; // usuário para o qual vamos sugerir amigos
    printf("Informe o número do usuário para sugerir amigos (0 a %d):\n", M-1);
    scanf("%d", &x);

    printf("Sugestões de amizade para o usuário %d:\n", x);

    // percorre todos os usuários para verificar possíveis sugestões
    for (int y = 0; y < M; y++) {
        if (y == x) continue; // não sugerir a si mesmo
        if (amizades[x][y] == 1) continue; // já é amigo, não sugerir

        int amigo_comum = 0; // verificar se há amigo em comum

        // percorre todos os usuários para ver se existe amigo em comum
        for (int z = 0; z < M; z++) {
            if (amizades[x][z] == 1 && amizades[y][z] == 1) {
                amigo_comum = 1; // encontrou amigo em comum
                break;
            }
        }

        if (amigo_comum) {
            printf("%d ", y); // sugere y como amigo
        }
    }

    printf("\n");
    return 0;
}
