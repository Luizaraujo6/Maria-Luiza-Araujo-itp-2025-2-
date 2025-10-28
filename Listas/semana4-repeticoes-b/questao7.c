#include <stdio.h>

int main() {
    int a, b, i, j, ehPrimo;

    // Leitura dos números a e b até que a > b
    do {
        printf("Digite o valor de a: ");
        scanf("%d", &a);
        printf("Digite o valor de b: ");
        scanf("%d", &b);

        if(a <= b) {
            printf("Erro: a deve ser maior que b. Digite novamente.\n");
        }
    } while(a <= b);

    printf("Números primos entre %d e %d:\n", b, a);

    // Verifica todos os números entre b e a
    for(i = b + 1; i < a; i++) {
        ehPrimo = 1; // assume que i é primo

        // Testa se i é divisível por algum número de 2 até sqrt(i)
        for(j = 2; j*j <= i; j++) {
            if(i % j == 0) {
                ehPrimo = 0; // não é primo
                break;
            }
        }

        if(ehPrimo && i > 1) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}


