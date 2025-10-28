#include <stdio.h>
#include <stdlib.h> 

int main() {
    int i, j, k, l;

    printf("Todas as soluções para o problema das 4 rainhas:\n\n");

    for(i = 0; i < 4; i++) {         // rainha da linha 0
        for(j = 0; j < 4; j++) {     // rainha da linha 1
            if(j == i || abs(j - i) == 1) continue; // mesma coluna ou diagonal
            for(k = 0; k < 4; k++) { // rainha da linha 2
                if(k == i || k == j || abs(k - i) == 2 || abs(k - j) == 1) continue;
                for(l = 0; l < 4; l++) { // rainha da linha 3
                    if(l == i || l == j || l == k || abs(l - i) == 3 || abs(l - j) == 2 || abs(l - k) == 1) continue;

                    // imprime o tabuleiro
                    int linha, coluna;
                    for(linha = 0; linha < 4; linha++) {
                        for(coluna = 0; coluna < 4; coluna++) {
                            if((linha==0 && coluna==i) || (linha==1 && coluna==j) ||
                               (linha==2 && coluna==k) || (linha==3 && coluna==l))
                                printf("Q ");
                            else
                                printf(". ");
                        }
                        printf("\n");
                    }
                    printf("\n");
                }
            }
        }
    }

    return 0;
}


