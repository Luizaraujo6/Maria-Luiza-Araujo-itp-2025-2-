#include <stdio.h>
#include <math.h>

// Função que calcula a altura do terreno
float altura(float x, float y) {
    return sin(cos(y) + x) + cos(y + sin(x));
}

// Função que verifica se um ponto é seguro (considerando a sonda)
int pontoSeguro(float x, float y) {
    if(altura(x, y) < 0 || altura(x, y) > 2) return 0;
    if(altura(x + 0.2, y + 0.2) < 0 || altura(x + 0.2, y + 0.2) > 2) return 0;
    if(altura(x - 0.2, y - 0.2) < 0 || altura(x - 0.2, y - 0.2) > 2) return 0;
    if(altura(x + 0.2, y - 0.2) < 0 || altura(x + 0.2, y - 0.2) > 2) return 0;
    if(altura(x - 0.2, y + 0.2) < 0 || altura(x - 0.2, y + 0.2) > 2) return 0;

    return 1; // ponto seguro
}

int main() {
    float x, y;

    // Leitura da coordenada de pouso
    scanf("%f %f", &x, &y);

    // Verifica se o ponto principal é seguro
    if(!pontoSeguro(x, y)) {
        printf("troque de coordenada\n");
        return 0;
    }

    // Pontos vizinhos a ±2
    int vizinhosSeguros = 0;
    if(pontoSeguro(x + 2, y)) vizinhosSeguros++;
    if(pontoSeguro(x - 2, y)) vizinhosSeguros++;
    if(pontoSeguro(x, y + 2)) vizinhosSeguros++;
    if(pontoSeguro(x, y - 2)) vizinhosSeguros++;

    // Classificação do local
    if(vizinhosSeguros <= 1)
        printf("inseguro\n");
    else if(vizinhosSeguros <= 3)
        printf("relativamente seguro\n");
    else
        printf("seguro\n");

    return 0;
}


