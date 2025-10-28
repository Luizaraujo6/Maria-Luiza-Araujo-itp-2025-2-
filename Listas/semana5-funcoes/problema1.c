#include <stdio.h>

// Função que imprime o horário corretamente, ajustando horas e minutos
void imprimirHorario(int h, int m, int formato) {
    h += m / 60;   // converte minutos excedentes em horas
    m = m % 60;    // ajusta minutos para 0-59
    h = h % 24;    // ajusta horas para 0-23

    if(formato == 0) { // formato 24h
        printf("%02d:%02d\n", h, m);
    } else {           // formato 12h
        int h12 = h % 12;
        if(h12 == 0) h12 = 12;
        char *am_pm = (h < 12) ? "AM" : "PM";
        printf("%02d:%02d %s\n", h12, m, am_pm);
    }
}

int main() {
    int h, m, formato;

    // leitura do horário inicial e formato
    scanf("%d %d %d", &h, &m, &formato);

    // Imprime a primeira ronda
    imprimirHorario(h, m, formato);

    // Acréscimos fixos das próximas rondas
    imprimirHorario(h + 1, m + 0, formato);   // +1h
    imprimirHorario(h + 2, m + 10, formato);  // +2h10m
    imprimirHorario(h + 4, m + 40, formato);  // +4h40m
    imprimirHorario(h + 12, m + 5, formato);  // +12h5m

    return 0;
}


