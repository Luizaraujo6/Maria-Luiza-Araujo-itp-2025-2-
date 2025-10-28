#include <stdio.h>

int main() {
    int n;
    
    // Leitura do número de questões
    scanf("%d", &n);
    
    int gabarito[n], aluno[n];
    
    // Leitura das respostas do gabarito
    for(int i = 0; i < n; i++) {
        scanf("%d", &gabarito[i]);
    }
    
    // Leitura das respostas do aluno
    for(int i = 0; i < n; i++) {
        scanf("%d", &aluno[i]);
    }
    
    // Contagem de acertos
    int acertos = 0;
    for(int i = 0; i < n; i++) {
        if(aluno[i] == gabarito[i]) {
            acertos++;
        }
    }
    
    // Impressão do resultado
    if(acertos == 1)
        printf("%d acerto\n", acertos);
    else
        printf("%d acertos\n", acertos);
    
    return 0;
}

