#include <stdio.h>

int main() {
    int valor1, valor2;

    printf("Digite dois valores diferentes:\n");
    scanf("%d %d", &valor1, &valor2);

    if (valor1 == valor2) {
        printf("Erro: os valores sao iguais.\n");
        return 1; 
    }

    if (valor1 > valor2) {
        printf("O maior valor eh: %d\n", valor1);
    } else {
        printf("O maior valor eh: %d\n", valor2);
    }

    return 0;
}

