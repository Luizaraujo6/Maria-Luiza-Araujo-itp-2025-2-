#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char aluno[20];          // nome do aluno procurado (até 10 caracteres)
    char relatorio[1001];    // string com o relatório completo
    char palavra[20];        // palavra atual que estamos lendo (data ou nome)
    int i = 0, j = 0;        // contadores
    int totalDatas = 0;      // total de aulas
    int presencas = 0;       // quantas vezes o aluno apareceu
    int dentroDeData = 0;    // indica se estamos lendo alunos após uma data
    char atualData[6];       // armazena a data atual (ex: 02/04)
    int alunoPresente = 0;   // indica se o aluno estava nessa data

    // Lê o nome do aluno e a string do relatório
    printf("Relatorio:\n");
    scanf("%s", aluno);
    getchar(); // limpa o ENTER do buffer
    fgets(relatorio, 1001, stdin); // lê a linha completa com as presenças

    // Percorre toda a string caractere por caractere
    while (1) {
        // lê uma palavra de cada vez (separada por espaço ou fim da linha)
        j = 0;
        while (relatorio[i] != ' ' && relatorio[i] != '\0' && relatorio[i] != '\n') {
            palavra[j] = relatorio[i];
            i++;
            j++;
        }
        palavra[j] = '\0'; // finaliza a palavra

        // se a palavra tem formato de data 
        if (strlen(palavra) == 5 && palavra[2] == '/') {
            // nova data encontrada → contamos uma nova aula
            totalDatas++;
            
            // se a data anterior estava em andamento, verifica se o aluno faltou
            if (totalDatas > 1 && alunoPresente == 0) {
                // aluno não apareceu na data anterior
            }

            // prepara para nova data
            strcpy(atualData, palavra);
            alunoPresente = 0; 
            dentroDeData = 1;
        }
        else if (strlen(palavra) > 0) {
            // é um nome de aluno
            if (strcmp(palavra, aluno) == 0) {
                alunoPresente = 1; // o aluno apareceu nesta data
            }
        }

        // se chegamos ao fim da string, paramos
        if (relatorio[i] == '\0' || relatorio[i] == '\n')
            break;

        i++; // pula o espaço e continua
    }

    // Se o aluno não apareceu na última data
    if (alunoPresente == 0 && totalDatas > 0) {
        // apenas conta como ausência no final
    }

    // número de ausências = total de datas - presenças

    i = 0;
    totalDatas = 0;
    presencas = 0;
    while (1) {
        j = 0;
        while (relatorio[i] != ' ' && relatorio[i] != '\0' && relatorio[i] != '\n') {
            palavra[j] = relatorio[i];
            i++;
            j++;
        }
        palavra[j] = '\0';

        if (strlen(palavra) == 5 && palavra[2] == '/') {
            totalDatas++;
        } else if (strcmp(palavra, aluno) == 0) {
            presencas++;
        }

        if (relatorio[i] == '\0' || relatorio[i] == '\n')
            break;
        i++;
    }

    // Calcula ausências e mostra o resultado
    int ausencias = totalDatas - presencas;
    printf("%d\n", ausencias);

    return 0;
}
