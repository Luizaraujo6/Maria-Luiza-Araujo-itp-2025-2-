#include <stdio.h>
#include <math.h>

// Função que retorna 1 se n é primo, 0 caso contrário
int ehPrimo(int n) {
    if(n < 2) return 0;         // números menores que 2 não são primos
    if(n == 2) return 1;        // 2 é primo
    if(n % 2 == 0) return 0;    // múltiplos de 2 não são primos

    int i;
    for(i = 3; i <= sqrt(n); i += 2) { // testa divisores ímpares até raiz de n
        if(n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int x;

    // percorre todos os números até 50000
    for(x = 2; x <= 50000; x++) {
        // verifica se x, x+2 e x+6 são primos
        if(ehPrimo(x) && ehPrimo(x + 2) && ehPrimo(x + 6)) {
            printf("(%d, %d, %d)\n", x, x + 2, x + 6);
        }
    }

    return 0;
}

