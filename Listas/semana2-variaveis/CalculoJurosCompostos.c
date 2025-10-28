#include <stdio.h>
#include <math.h>

int main() {
    float capital, taxa, tempo, montante, juros;
    
    printf("Informe o capital inicial: ");
    scanf("%f", &capital);

    printf("Informe a taxa de juros (ex: 5 para 5%%): ");
    scanf("%f", &taxa);

    printf("Informe o tempo em anos: ");
    scanf("%f", &tempo);

    montante = capital * pow((1 + taxa / 100), tempo);
    juros = montante - capital;

    printf("Montante: %.2f\n", montante);
    printf("Juros: %.2f\n", juros);

    return 0;
}
