#include <stdio.h>
#include <ctype.h>  // para usar isupper() e isdigit()

int main() {
    char placa[11]; // até 10 caracteres + '\0' no final

    // Lê a placa
    printf("Informe a placa:\n");
    scanf("%s", placa);

    int i; // variável auxiliar para percorrer a string
    int formatoBrasileiro = 1; // começa assumindo que pode ser brasileiro
    int formatoMercosul = 1;   // e também pode ser mercosul

    // Verifica se é do padrão BRASILEIRO
    // Padrão: LLL-AAAA
    for (i = 0; placa[i] != '\0'; i++);

    // primeiro verificamos se o tamanho é 8
    if (i != 8) {
        formatoBrasileiro = 0; // se não tiver 8 caracteres, não é brasileiro
    } else {
        // verifica cada posição
        if (!isupper(placa[0]) || !isupper(placa[1]) || !isupper(placa[2]))
            formatoBrasileiro = 0;
        if (placa[3] != '-')
            formatoBrasileiro = 0;
        if (!isdigit(placa[4]) || !isdigit(placa[5]) || !isdigit(placa[6]) || !isdigit(placa[7]))
            formatoBrasileiro = 0;
    }

    // Verifica se é do padrão MERCOSUL
    // Padrão: LLLALAA
    if (i != 7) {
        formatoMercosul = 0; // se não tiver 7 caracteres, não é mercosul
    } else {
        if (!isupper(placa[0]) || !isupper(placa[1]) || !isupper(placa[2]))
            formatoMercosul = 0;
        if (!isdigit(placa[3]))
            formatoMercosul = 0;
        if (!isupper(placa[4]))
            formatoMercosul = 0;
        if (!isdigit(placa[5]) || !isdigit(placa[6]))
            formatoMercosul = 0;
    }

    // resultado
    if (formatoBrasileiro == 1)
        printf("brasileiro\n");
    else if (formatoMercosul == 1)
        printf("mercosul\n");
    else
        printf("inválido\n");

    return 0;
}

