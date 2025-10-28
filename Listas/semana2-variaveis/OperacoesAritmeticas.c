#include <stdio.h>

int main() {
    int num1, num2;

    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("A soma dos numeros é: %d\n", num1 + num2);
    printf("A subtração dos numero é: %d\n", num1 - num2);
    printf("A multiplicação dos numeros é: %d\n", num1 * num2);
    printf("A divisão real dos numeros é: %.2f\n", (float)num1 / num2);
    printf("O resto da divisão dos numeros é: %d\n", num1 % num2);
    printf("A media aritmetica dos numeros é: %.2f\n", (float)(num1 + num2) / 2);

    return 0;
}