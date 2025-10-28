#include <stdio.h>

int main() {
    char campo[21];  // palavra com até 20 caracteres (+1 para o '\0' do final)
    int indice;      // posição que o usuário vai escolher
    int bombas = 0;  // contador de bombas nas posições vizinhas

    // Lê a palavra
    scanf("%s", campo);

    // Lê o índice
    scanf("%d", &indice);

    // Se na posição escolhida houver uma bomba ('x')
    if (campo[indice] == 'x') {
        printf("bum!\n"); // mostra "bum!"
    } 
    else {
        // Verifica a posição à esquerda (se não for a primeira)
        if (indice > 0 && campo[indice - 1] == 'x') {
            bombas++;
        }

        // Verifica a posição à direita (se não for a última)
        if (campo[indice + 1] != '\0' && campo[indice + 1] == 'x') {
            bombas++;
        }

        // Mostra quantas bombas há nas posições vizinhas
        printf("%d\n", bombas);
    }

    return 0;
}
