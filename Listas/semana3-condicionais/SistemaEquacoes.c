#include <stdio.h>
#include <math.h>

int main() {
    int coeficienteA, coeficienteB, coeficienteC;
    float raiz1, raiz2, discriminante;

    printf("Informe o coeficiente A: ");
    scanf("%d", &coeficienteA);

    printf("Informe o coeficiente B: ");
    scanf("%d", &coeficienteB);

    printf("Informe o coeficiente C: ");
    scanf("%d", &coeficienteC);

    if (coeficienteA == 0) {
        printf("O coeficiente A nao pode ser zero.\n");
       
    } else {
        discriminante = (coeficienteB * coeficienteB) - (4 * coeficienteA * coeficienteC);

        if (discriminante > 0) {
            raiz1 = (-coeficienteB + sqrt(discriminante)) / (2 * coeficienteA);
            raiz2 = (-coeficienteB - sqrt(discriminante)) / (2 * coeficienteA);

            printf("As raizes da equacao sao: %.2f e %.2f\n", raiz1, raiz2);

        } else if (discriminante == 0) {
            raiz1 = -coeficienteB / (2 * coeficienteA);
            
            printf("A raiz da equacao é: %.2f\n", raiz1);

        } else {
            printf("A equacao nao possui raizes reais.\n");
        }
    }
    

}