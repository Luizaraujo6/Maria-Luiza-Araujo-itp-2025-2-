#include <stdio.h>
#include <stdlib.h> 

int main() {
    int A, B, DA = 1, DB = 1, i;

    // Entrada
    printf("Digite dois numeros inteiros diferentes: ");
    scanf("%d %d", &A, &B);

    // Calcula D(A): soma dos divisores próprios de A
    for(i = 2; i <= A/2; i++) {
        if(A % i == 0) {
            DA += i;
        }
    }

    // Calcula D(B): soma dos divisores próprios de B
    for(i = 2; i <= B/2; i++) {
        if(B % i == 0) {
            DB += i;
        }
    }

    // Verifica se são colegas
    if(abs(DA - B) <= 2 && abs(DB - A) <= 2) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}


