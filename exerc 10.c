#include <stdio.h>

int main() {
    char sexo;
    float altura, pesoIdeal;

    printf("Digite a altura (ex: 1.50): ");
    scanf("%f", &altura);

    printf("Digite o sexo (M para masculino ou F para feminino): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = (62.1 * altura) - 44.7;
    } else {
        printf("Sexo inválido. Utilize M para masculino ou F para feminino.\n");
        return 1; 
    }

    printf("Peso ideal: %.2f kg\n", pesoIdeal);

    return 0;
}

