#include <stdio.h>
#include <math.h> 

int main() {
    float x, y, distancia;
    int i, pontuacaoPrincipal, pontuacaoBonus, pontuacaoTotal = 0;

    float xAnterior = 0, yAnterior = 0; // coordenadas do lançamento anterior
    int principalAnterior = 0;          // guarda a pontuação principal anterior

    // Loop para 10 lançamentos
    for(i = 1; i <= 10; i++) {
        printf("Digite as coordenadas do lancamento %d (x y): ", i);
        scanf("%f %f", &x, &y);

        // Calcula a distância até o centro (0,0)
        distancia = sqrt(x*x + y*y);

        // Define a pontuação principal de acordo com a distância
        if(distancia <= 1.0) {
            pontuacaoPrincipal = 10;
        } else if(distancia <= 2.0) {
            pontuacaoPrincipal = 6;
        } else if(distancia <= 3.0) {
            pontuacaoPrincipal = 4;
        } else {
            pontuacaoPrincipal = 0;
        }

        // Calcula bônus: só se não for o primeiro lançamento e se o ponto for igual ao anterior
        if(i > 1 && x == xAnterior && y == yAnterior) {
            pontuacaoBonus = principalAnterior / 2;
        } else {
            pontuacaoBonus = 0;
        }

        // Soma na pontuação total
        pontuacaoTotal += pontuacaoPrincipal + pontuacaoBonus;

        // Atualiza dados do último lançamento
        xAnterior = x;
        yAnterior = y;
        principalAnterior = pontuacaoPrincipal;
    }

    // Exibe a pontuação final
    printf("\nPontuacao total: %d\n", pontuacaoTotal);

    return 0;
}

