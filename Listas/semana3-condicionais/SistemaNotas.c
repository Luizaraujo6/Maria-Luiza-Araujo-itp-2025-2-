#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media, notafinal;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if(media >= 7.0) {
        printf("Aprovado\n");
    } else if(media < 4.0) {
        printf("Reprovado\n");
    } else {
        printf("Recuperacao\n");

        notafinal = 10.0 - media;
        printf("Nota final necessaria para passar: %.2f\n", notafinal);
    }

    return 0;
}