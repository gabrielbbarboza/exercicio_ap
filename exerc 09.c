#include <stdio.h>

int main() {
    int horasTrabalhadas;
    float salarioPorHora, salarioTotal, horasExtras;

    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%d", &horasTrabalhadas);

    printf("Digite o valor do salário por hora: ");
    scanf("%f", &salarioPorHora);

    if (horasTrabalhadas > 160) { 
        horasExtras = horasTrabalhadas - 160;
        salarioTotal = (160 * salarioPorHora) + (horasExtras * salarioPorHora * 1.5);
    } else {
        salarioTotal = horasTrabalhadas * salarioPorHora;
    }

    printf("O salário total do funcionário é: R$ %.2f\n", salarioTotal);

    return 0;
}

