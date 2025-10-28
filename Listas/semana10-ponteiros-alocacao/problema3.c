#include <stdio.h>
#include <stdlib.h>
#include <string.h> // para strlen()

// Função que mistura duas strings alternando seus caracteres
char *misturar(char *str1, char *str2) {
    int tam1 = strlen(str1);
    int tam2 = strlen(str2);
    int tamMaior = (tam1 > tam2) ? tam1 : tam2; // pega o maior tamanho

    // Aloca memória para a nova string (+1 para o caractere de fim '\0')
    char *resultado = (char*) malloc((tam1 + tam2 + 1) * sizeof(char));

    int i, j = 0; // i percorre cada string, j percorre o resultado

    // Mistura as letras alternadamente
    for (i = 0; i < tamMaior; i++) {
        if (i < tam1) { // se ainda há letra em str1
            resultado[j] = str1[i];
            j++;
        }
        if (i < tam2) { // se ainda há letra em str2
            resultado[j] = str2[i];
            j++;
        }
    }

    resultado[j] = '\0'; // finaliza a string

    return resultado; // retorna a nova string misturada
}

int main() {
    char str1[101], str2[101];
    char *misturada;

    // Lê as duas strings
    printf("Informe a primeira string:\n");
    fgets(str1, 101, stdin); // lê até 100 caracteres (permite espaços)
    str1[strcspn(str1, "\n")] = '\0'; // remove o '\n' do final, se existir

    printf("Informe a segunda string:\n");
    fgets(str2, 101, stdin);
    str2[strcspn(str2, "\n")] = '\0'; // remove o '\n'

    // Chama a função misturar
    misturada = misturar(str1, str2);

    // Mostra o resultado
    printf("String misturada: %s\n", misturada);

    // Libera a memória alocada
    free(misturada);

    return 0;
}


