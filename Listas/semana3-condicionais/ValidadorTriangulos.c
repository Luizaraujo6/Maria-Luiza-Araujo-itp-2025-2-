#include <stdio.h>

int main() {
    int ladoA, ladoB, ladoC;

    printf("Digite o valor do lado A do triangulo: ");
    scanf("%d", &ladoA);

    printf("Digite o valor do lado B do triangulo: ");
    scanf("%d", &ladoB);

    printf("Digite o valor do lado C do triangulo: ");
    scanf("%d", &ladoC);

    if (ladoA < ladoB + ladoC && ladoB < ladoA + ladoC && ladoC < ladoA + ladoB) {
        if (ladoA == ladoB && ladoB == ladoC) {
            printf("Triangulo Equilatero.\n");
        } else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC) {
            printf("Triangulo Isosceles.\n");
        } else {
            printf("Triangulo Escaleno.\n");
        }

        if (ladoA * ladoA == ladoB * ladoB + ladoC * ladoC ||
            ladoB * ladoB == ladoA * ladoA + ladoC * ladoC ||
            ladoC * ladoC == ladoA * ladoA + ladoB * ladoB) {
            printf("Triangulo Retangulo.\n");
        } else if (ladoA * ladoA < ladoB * ladoB + ladoC * ladoC || ladoB * ladoB < ladoA * ladoA + ladoC * ladoC || ladoC * ladoC < ladoA * ladoA + ladoB * ladoB) {
            printf("Triangulo Obtusangulo.\n");
        } else {
            printf("Triangulo Acutangulo.\n");
        }

    } else {
        printf("Os valores nao formam um triangulo.\n");
    }

}