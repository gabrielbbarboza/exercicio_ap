#include <stdio.h>

int main() {
    float salarioFixo, valorVendas, salarioTotal, comissao;

    printf("Digite o salário fixo do vendedor: ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor total das vendas efetuadas: ");
    scanf("%f", &valorVendas);

    if (valorVendas <= 1500) {
        comissao = valorVendas * 0.03;
    } else {
        comissao = 1500 * 0.03 + (valorVendas - 1500) * 0.05;
    }

    salarioTotal = salarioFixo + comissao;
    printf("Salário total: R$ %.2f\n", salarioTotal);

    return 0;
}

