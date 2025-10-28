#include <stdio.h>
#include <math.h> 

int main() {
    float comprimentoteia;    
    int Xaranha, Yaranha, alvostotais, i, conseguiu = 1;         

    // Entrada dos dados
    printf("Digite a coordenada inicial do Homem Aranha (x y): ");
    scanf("%d %d", &Xaranha, &Yaranha);

    printf("Digite o comprimento maximo da teia: ");
    scanf("%f", &comprimentoteia);

    printf("Digite a quantidade de alvos: ");
    scanf("%d", &alvostotais);

    // Loop para verificar cada alvo
    for(i = 0; i < alvostotais; i++) {
        float ax, ay; // coordenadas do alvo
        float distancia;

        printf("Digite as coordenadas do alvo %d (x y): ", i+1);
        scanf("%f %f", &ax, &ay);

        // Distância euclidiana entre o Homem-Aranha e o alvo
        distancia = sqrt(pow(ax - Xaranha, 2) + pow(ay - Yaranha, 2));

        if(distancia <= comprimentoteia) {
            // Atualiza posição do Homem-Aranha
            Xaranha = (int)(2 * ax - Xaranha); // posição X muda
            // Yaranha permanece o mesmo
        } else {
            conseguiu = 0; // falhou em um alvo
        }
    }

    // Resultado final
    if(conseguiu == 1) {
        printf("S\n"); // conseguiu em todos
    } else {
        printf("N\n"); // falhou em pelo menos um
    }

    return 0;
}
