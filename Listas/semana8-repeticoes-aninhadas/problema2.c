#include <stdio.h>
#include <string.h>

int main() {
    int chuva[12];
    char meses[12][20] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho",
                          "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    int i, j, temp;
    char tempMes[20];

    // Leitura dos 12 valores de chuva
    for (i = 0; i < 12; i++) {
        scanf("%d", &chuva[i]);
    }

    // Bubble Sort (ordenando do maior para o menor)
    for (i = 0; i < 12 - 1; i++) {
        for (j = 0; j < 12 - i - 1; j++) {
            if (chuva[j] < chuva[j + 1]) {
                // Troca os valores de chuva
                temp = chuva[j];
                chuva[j] = chuva[j + 1];
                chuva[j + 1] = temp;

                // Troca também os nomes dos meses
                strcpy(tempMes, meses[j]);
                strcpy(meses[j], meses[j + 1]);
                strcpy(meses[j + 1], tempMes);
            }
        }
    }

    // Exibe o ranking do mês mais chuvoso ao menos chuvoso
    for (i = 0; i < 12; i++) {
        printf("%s %d\n", meses[i], chuva[i]);
    }

    return 0;
}


