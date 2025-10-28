#include <stdio.h>

int main() {
    float valor, desconto, valorFinal, porcentagem;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor);

    if (valor <= 100){
        printf("Sem desconto. Valor final: R$ %.2f\n", valor);
    } else if (valor <= 500){
        porcentagem = 10.0;
        desconto = (porcentagem / 100) * valor;
        valorFinal = valor - desconto;
        printf("Valor final com desconto de %.1f%%: R$ %.2f\n", porcentagem, valorFinal);
    } else if (valor <= 1000){
        porcentagem = 15.0;
        desconto = (porcentagem / 100) * valor;
        valorFinal = valor - desconto;
        printf("Valor final com desconto de %.1f%%: R$ %.2f\n", porcentagem, valorFinal);
    } else {
        porcentagem = 20.0;
        desconto = (porcentagem / 100) * valor;
        valorFinal = valor - desconto;
        printf("Valor final com desconto de %.1f%%: R$ %.2f\n", porcentagem, valorFinal);
    }

}