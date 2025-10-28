#include <stdio.h>

int main() {
    char tipo;
    float consumo, valor;
    int taxa=15;

    printf("Qual o tipo de consumo? (r-residencial, c-comercial, i-industrial): ");
    scanf(" %c", &tipo);

    if (tipo == 'r' || tipo == 'R') {
        printf("Digite o consumo em kWh: ");
        scanf("%f", &consumo);

        valor = (consumo * 0.60) + taxa;

        printf("O valor a ser pago é: R$ %.2f\n", valor);

    } else if (tipo == 'c' || tipo == 'C') {
        printf("Digite o consumo em kWh: ");
        scanf("%f", &consumo);

        valor = (consumo * 0.48) + taxa;

        printf("O valor a ser pago é: R$ %.2f\n", valor);
        
    } else if (tipo == 'i' || tipo == 'I') {
        printf("Digite o consumo em kWh: ");
        scanf("%f", &consumo);

        valor = (consumo * 1.29) + taxa;

        printf("O valor a ser pago é: R$ %.2f\n", valor);
        
    } else
    {
        printf("Tipo de consumo inválido.\n");
    }
    
 
}