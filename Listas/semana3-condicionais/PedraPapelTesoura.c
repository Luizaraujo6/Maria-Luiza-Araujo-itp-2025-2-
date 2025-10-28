#include <stdio.h>

int main() {
    char jogador1, jogador2;

    printf("Insira a jogada do jogador 1 (P - Pedra, A - Papel, T - Tesoura): ");
    scanf(" %c", &jogador1);

    printf("Insira a jogada do jogador 2 (P - Pedra, A - Papel, T - Tesoura): ");
    scanf(" %c", &jogador2);

    if (jogador1 == jogador2) {
        printf("Empate!\n");
    } else if ((jogador1 == 'P' && jogador2 == 'T') || 
               (jogador1 == 'p' && jogador2 == 't') || 
               (jogador1 == 'T' && jogador2 == 'A') || 
               (jogador1 == 't' && jogador2 == 'a') || 
               (jogador1 == 'A' && jogador2 == 'P') ||
               (jogador1 == 'a' && jogador2 == 'p')) {
        printf("Jogador 1 venceu!\n");
    } else {
        printf("Jogador 2 venceu!\n");
    }

}