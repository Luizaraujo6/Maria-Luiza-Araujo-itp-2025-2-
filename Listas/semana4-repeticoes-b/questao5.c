#include <stdio.h>

int main() {
    int n, i, j, num = 1; 

    printf("Digite o número de linhas: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {       // controla o número de linhas
        for(j = 1; j <= i; j++) {   // imprime os números em cada linha
            printf("%d ", num);
            num++;                  // incrementa o número
        }
        printf("\n");                // pula para a próxima linha
    }

    return 0;
}


