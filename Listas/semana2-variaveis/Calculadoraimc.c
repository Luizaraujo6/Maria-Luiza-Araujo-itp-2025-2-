#include <stdio.h>

int main() {
    float imc, peso, altura;

    printf("Qual o peso? ");
    scanf("%f", &peso);

    printf("Qual a altura? ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("O IMC é:  %.2f\n", imc);

    return 0;
}