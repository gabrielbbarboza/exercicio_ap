#include <stdio.h>

int main() {
    int anoAtual, anoNascimento, idade;

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    idade = anoAtual - anoNascimento;

    if (idade >= 16) {
        printf("Voce pode votar este ano! Idade: %d anos.\n", idade);
    } else {
        printf("Você nao pode votar este ano. Idade: %d anos.\n", idade);
    }

    return 0;
}

