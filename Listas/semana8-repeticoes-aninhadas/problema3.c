#include <stdio.h>

int main() {
    int n; // quantidade de pilotos

    // pede ao usuário a quantidade de pilotos
    printf("Informe o número de pilotos na corrida:\n");
    scanf("%d", &n);

    int largada[n]; // vetor para guardar a ordem de largada
    int chegada[n]; // vetor para guardar a ordem de chegada

    // lê a ordem de largada
    printf("Informe a ordem de largada (do 1º ao %dº lugar):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &largada[i]);
    }

    // lê a ordem de chegada
    printf("Informe a ordem de chegada (do 1º ao %dº lugar):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &chegada[i]);
    }

    int pos_largada, pos_chegada;
    int maior_ganho = 0; // guarda o maior número de posições ganhas
    int piloto_ganhador = -1; // guarda o piloto que mais ganhou posições
    int empate = 0; // variável para marcar se houve empate

    // percorre todos os pilotos
    for (int i = 0; i < n; i++) {
        int piloto = chegada[i]; // piloto que terminou nessa posição

        // procura onde ele largou
        for (int j = 0; j < n; j++) {
            if (largada[j] == piloto) {
                pos_largada = j;
                break;
            }
        }

        // calcula quantas posições o piloto ganhou
        pos_chegada = i;
        int ganho = pos_largada - pos_chegada;

        // verifica se ganhou posições
        if (ganho > maior_ganho) {
            maior_ganho = ganho;
            piloto_ganhador = piloto;
            empate = 0; // zera o empate, pois temos um novo maior
        } else if (ganho == maior_ganho && ganho > 0) {
            empate = 1; // mais de um piloto com o mesmo ganho máximo
        }
    }

    // mostra o resultado final
    if (maior_ganho == 0 || empate == 1) {
        printf("empate\n");
    } else {
        printf("O piloto que mais ganhou posições foi o #%d\n", piloto_ganhador);
    }

    return 0;
}