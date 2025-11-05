#include <stdio.h>
#include "numeros.h"

int main() {
    int a = 9;
    int b = 2;

    num_par(a);
    num_primo(a, a - 1);       // b = a-1 para recursao
    printf("Fatorial: %d\n", fat(a));
    maior(a, b);
    printf("Potencia: %d\n", pot(a, b));

    return 0;
}
