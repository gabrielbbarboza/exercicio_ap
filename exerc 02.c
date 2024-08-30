#include <stdio.h>

int main() {
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor >= 0) {
        printf("O valor eh POSITIVO!\n");
    } else {
        printf("O valor eh NEGATIVO!\n");
    }

    return 0;
}

