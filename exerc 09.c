#include <stdio.h>

int main() {
    int horasTrabalhadas;
    float salarioPorHora, salarioTotal, horasExtras;

    printf("Digite o n�mero de horas trabalhadas no m�s: ");
    scanf("%d", &horasTrabalhadas);

    printf("Digite o valor do sal�rio por hora: ");
    scanf("%f", &salarioPorHora);

    if (horasTrabalhadas > 160) { 
        horasExtras = horasTrabalhadas - 160;
        salarioTotal = (160 * salarioPorHora) + (horasExtras * salarioPorHora * 1.5);
    } else {
        salarioTotal = horasTrabalhadas * salarioPorHora;
    }

    printf("O sal�rio total do funcion�rio �: R$ %.2f\n", salarioTotal);

    return 0;
}

