#include <stdio.h>
#include <stdlib.h> // para usar malloc() e free()

// Função que busca um valor no vetor e retorna um novo vetor com os índices encontrados
int* buscaNoVetor(int *v, int n, int valor, int *qtd) {
    int i, cont = 0;
    
    // Primeiro, contamos quantas vezes o valor aparece
    for (i = 0; i < n; i++) {
        if (v[i] == valor) {
            cont++;
        }
    }

    // Se não encontrou nenhuma ocorrência
    if (cont == 0) {
        *qtd = 0; // atualiza a quantidade com 0
        return NULL; // retorna NULL (nenhum índice encontrado)
    }

    // Aloca um novo vetor para guardar os índices onde o valor foi encontrado
    int *indices = (int*) malloc(cont * sizeof(int));

    // Preenche o vetor de índices
    int j = 0;
    for (i = 0; i < n; i++) {
        if (v[i] == valor) {
            indices[j] = i; // guarda o índice
            j++;
        }
    }

    *qtd = cont; // atualiza a quantidade de ocorrências encontradas
    return indices; // retorna o endereço do vetor de índices
}

int main() {
    int n, i, valor, qtd;
    int *v, *indices;

    // Lê o tamanho do vetor
    printf("Informe a quantidade de elementos do vetor:\n");
    scanf("%d", &n);

    // Aloca o vetor dinamicamente
    v = (int*) malloc(n * sizeof(int));

    // Lê os elementos do vetor
    printf("Informe os %d elementos do vetor:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    // Lê o valor a ser buscado
    printf("Informe o valor a ser buscado no vetor:\n");
    scanf("%d", &valor);

    // Chama a função para buscar o valor e receber os índices
    indices = buscaNoVetor(v, n, valor, &qtd);

    // Mostra o resultado
    if (indices == NULL) {
        printf("Nenhuma ocorrencia\n");
    } else {
        printf("%d\n", qtd); // mostra a quantidade de ocorrências
        for (i = 0; i < qtd; i++) {
            printf("%d", indices[i]); // mostra os índices encontrados
        }
        printf("\n");
    }

    // Libera a memória alocada
    free(v);
    free(indices);

    return 0;
}
