#include <stdio.h>

int main() {
    int quantidadeAtual, quantidadeMaxima, quantidadeMinima;
    float quantidadeMedia;

    printf("Digite a quantidade atual em estoque: ");
    scanf("%d", &quantidadeAtual);

    printf("Digite a quantidade maxima em estoque: ");
    scanf("%d", &quantidadeMaxima);

    printf("Digite a quantidade minima em estoque: ");
    scanf("%d", &quantidadeMinima);

    quantidadeMedia = (quantidadeMaxima + quantidadeMinima) / 2.0;

    printf("Quantidade media: %.2f\n", quantidadeMedia);
    printf("%s\n", quantidadeAtual >= quantidadeMedia ? "Nao efetuar compra" : "Efetuar compra");

    return 0;
}

