#include <stdio.h>

int main() {
    int numeroConta;
    float saldo, debito, credito, saldoAtual;

    printf("Digite o numero da conta do cliente: ");
    scanf("%d", &numeroConta);

    printf("Digite o saldo da conta: R$ ");
    scanf("%f", &saldo);

    printf("Digite o valor do debito: R$ ");
    scanf("%f", &debito);

    printf("Digite o valor do credito: R$ ");
    scanf("%f", &credito);

    saldoAtual = saldo - debito + credito;

    printf("Número da conta: %d\n", numeroConta);
    printf("Saldo atual: R$ %.2f\n", saldoAtual);

    if (saldoAtual >= 0) {
        printf("Saldo Positivo\n");
    } else {
        printf("Saldo Negativo\n");
    }

    return 0;
}

