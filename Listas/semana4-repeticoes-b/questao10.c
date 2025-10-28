#include <stdio.h>

int main() {
    float p, q, razao, maiorRazao = 0;
    int x, y, melhorX = 0, melhorY = 0;

    // Leitura dos valores
    printf("Digite o preco de venda p: ");
    scanf("%f", &p);

    printf("Digite o preco de producao q: ");
    scanf("%f", &q);

    // Testa todas as combinações possíveis de pacotes
    for(x = 2; x <= 10; x++) {        // x deve ser maior que y
        for(y = 1; y < x; y++) {      // y < x
            // Verifica se não há prejuízo
            if(y * p >= x * q) {
                razao = (float)x / y;
                if(razao > maiorRazao) {
                    maiorRazao = razao;
                    melhorX = x;
                    melhorY = y;
                }
            }
        }
    }

    // Imprime a melhor promoção
    if(maiorRazao > 0) {
        printf("A melhor promocao eh: leve %d pague %d\n", melhorX, melhorY);
    } else {
        printf("Nao ha nenhuma promocao viavel sem prejuizo.\n");
    }

    return 0;
}

