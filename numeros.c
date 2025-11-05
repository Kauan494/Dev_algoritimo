#include <stdio.h>
#include "numeros.h"



// Verifica se o numero e par
int num_par(int a) {
    if (a % 2 == 0)
        printf("%d e par\n", a);
    else
        printf("%d nao e par\n", a);
    return 0;
}

// Verifica se o numero e primo usando recursao
int num_primo(int a, int b) {
    if (a < 2) {
        printf("%d nao e primo\n", a);
        return 0;
    }
    if (b == 1) { // chegou em 1 sem achar divisor
        printf("%d e primo\n", a);
        return 1;
    }
    if (a % b == 0) { // achou divisor
        printf("%d nao e primo\n", a);
        return 0;
    }
    return num_primo(a, b - 1); // chama novamente diminuindo o divisor
}

// Calcula fatorial de forma recursiva
int fat(int a) {
    if (a <= 1)
        return 1;
    else
        return a * fat(a - 1);
}

// Retorna o maior numero entre dois floats e imprime
float maior(float a, float b) {
    if (a > b) {
        printf("Maior numero: %.2f\n", a);
        return a;
    } else if (b > a) {
        printf("Maior numero: %.2f\n", b);
        return b;
    } else {
        printf("Numeros iguais: %.2f\n", a);
        return a;
    }
}

// Calcula potencia de forma recursiva
int pot(int a, int b) {
    if (b == 0)
        return 1;
    else
        return a * pot(a, b - 1);
}





