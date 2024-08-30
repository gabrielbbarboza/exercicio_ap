#include <stdio.h>

int main() {
    int quantidade;
    float custoTotal;

    printf("Digite o numero de macas compradas: ");
    scanf("%d", &quantidade);

    if (quantidade < 12) {
        custoTotal = quantidade * 1.30;
    } else {
        custoTotal = quantidade * 1.00;
    }

    printf("O custo total da compra é: R$%.2f\n", custoTotal);

    return 0;
}

