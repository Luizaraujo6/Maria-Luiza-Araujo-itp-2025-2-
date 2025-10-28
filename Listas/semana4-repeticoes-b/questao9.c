#include <stdio.h>

int main() {
    int preco1, preco2, quantia, i, j, resto, menorResto = -1, melhorI = 0, melhorJ = 0;

    // Leitura dos dados
    printf("Digite o preco do primeiro fornecedor: ");
    scanf("%d", &preco1);

    printf("Digite o preco do segundo fornecedor: ");
    scanf("%d", &preco2);

    printf("Digite a quantia disponivel: ");
    scanf("%d", &quantia);

    // Testa todas as combinações de 0 a 10 unidades de cada fornecedor
    for(i = 0; i <= 10; i++) {
        for(j = 0; j <= 10; j++) {
            resto = quantia - (i * preco1 + j * preco2);
            if(resto >= 0) { // compra possível
                if(menorResto == -1 || resto < menorResto) {
                    menorResto = resto;
                    melhorI = i;
                    melhorJ = j;
                }
            }
        }
    }

    // Imprime a melhor combinação
    printf("Resta menos comprando %d do primeiro e %d do segundo\n", melhorI, melhorJ);

    return 0;
}

