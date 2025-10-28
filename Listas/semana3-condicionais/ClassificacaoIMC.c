#include <stdio.h>

int main() {
    float peso, altura, imc;

    // Solicita ao usuário o peso e a altura
    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    // Calcula o IMC
    imc = peso / (altura * altura);

    // Classifica o IMC e exibe a mensagem correspondente
    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Peso normal\n");
    } else if (imc >= 25 && imc < 30) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidade\n");
    }

    return 0;
}
