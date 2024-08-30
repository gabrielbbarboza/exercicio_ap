#include <stdio.h>

int main() {
    float nota1, nota2, media;

    printf("Digite a nota da primeira avaliacao: ");
    scanf("%f", &nota1);

    printf("Digite a nota da segunda avaliacao: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 7.0) {
        printf("Aprovado! Media: %.2f\n", media);
    } else {
        printf("Reprovado. Media: %.2f\n", media);
    }

    return 0;
}

