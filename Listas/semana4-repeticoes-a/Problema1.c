#include <stdio.h>

int main(){
    float comprimentofolha, largura, comprimentobolso;
    int dobras = 0; // contador de dobras realizadas

    // Entrada dos dados
    printf("Qual o comprimento da folha? ");
    scanf("%f", &comprimentofolha);

    printf("Qual a largura da folha? ");
    scanf("%f", &largura);

    printf("Qual o comprimento do bolso? ");
    scanf("%f", &comprimentobolso);

    // Enquanto os dois lados ainda forem maiores que o bolso
    while (comprimentofolha > comprimentobolso && largura > comprimentobolso){
        // Sempre dobra o maior dos lados
        if(comprimentofolha >= largura){
            comprimentofolha = comprimentofolha / 2;
        } else {
            largura = largura / 2;
        }
        dobras++; // incrementa o número de dobras
    }

    // Exibe o resultado final
    printf("\nQuantidade de dobras necessarias: %d\n", dobras);
    printf("Largura final: %.2f\n", largura);
    printf("Comprimento final: %.2f\n", comprimentofolha);

    return 0;
}
