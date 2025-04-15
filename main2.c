#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float valor;
    float soma = 0;
    int contador = 0;
    while (1) {
        scanf("%f", &valor);

        if (valor < 0) {
            break;
        }

        soma += valor;
        contador++;
    }

    printf("%.2f\n", soma);

    if (contador > 0) {
        printf("%.2f\n", soma / contador);
    } else {
        printf("0.00\n");
    }

    return 0;
}