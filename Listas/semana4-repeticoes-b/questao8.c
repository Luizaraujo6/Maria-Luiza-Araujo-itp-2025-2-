#include <stdio.h>

int main() {
    int preco1, preco2, quantia;
    int i, j, resto;

    // Leitura dos dados
    printf("Digite o preco do primeiro fornecedor: ");
    scanf("%d", &preco1);

    printf("Digite o preco do segundo fornecedor: ");
    scanf("%d", &preco2);

    printf("Digite a quantia disponivel: ");
    scanf("%d", &quantia);

    printf("\nPossibilidades de compra:\n");

    // Testa todas as combinações de 0 a 10 unidades de cada fornecedor
    for(i = 0; i <= 10; i++) {
        for(j = 0; j <= 10; j++) {
            resto = quantia - (i * preco1 + j * preco2);
            if(resto >= 0) { // compra possível
                printf("Comprando %d do primeiro e %d do segundo resta: %d\n", i, j, resto);
            }
        }
    }

    return 0;
}


