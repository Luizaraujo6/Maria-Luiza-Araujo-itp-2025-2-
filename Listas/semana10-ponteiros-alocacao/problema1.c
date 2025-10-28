#include <stdio.h>
#include <stdlib.h> // para malloc e free

// Função para alocar dinamicamente um vetor de inteiros
int* alocarVetor(int tamanho) {
    int *vetor = (int*) malloc(tamanho * sizeof(int));
    return vetor;
}

// Função para somar dois vetores de mesma dimensão
// Retorna um novo vetor com a soma
int* somaVetores(int *u, int *v, int n) {
    int *resultado = alocarVetor(n);
    for (int i = 0; i < n; i++) {
        resultado[i] = u[i] + v[i];
    }
    return resultado;
}

int main() {
    int n1, n2;

    // Lê o tamanho dos dois vetores
    printf("Informe o tamanho do primeiro vetor (n1):\n");
    scanf("%d", &n1);

    printf("Informe o tamanho do segundo vetor (n2):\n");
    scanf("%d", &n2);

    // Aloca dinamicamente os vetores
    int *u = alocarVetor(n1);
    int *v = alocarVetor(n2);

    // Lê os elementos do vetor u
    printf("Informe os %d elementos do primeiro vetor (u):\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &u[i]);
    }

    // Lê os elementos do vetor v
    printf("Informe os %d elementos do segundo vetor (v):\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &v[i]);
    }

    // Verifica se as dimensões são compatíveis
    if (n1 != n2) {
        printf("dimensoes incompativeis\n");
    } else {
        // Chama a função somaVetores
        int *resultado = somaVetores(u, v, n1);

        // Exibe o vetor resultante
        printf("Vetor resultante da soma:\n");
        for (int i = 0; i < n1; i++) {
            printf("%d ", resultado[i]);
        }
        printf("\n");

        // Libera memória do vetor resultado
        free(resultado);
    }

    // Libera memória dos vetores u e v
    free(u);
    free(v);

    return 0;
}
