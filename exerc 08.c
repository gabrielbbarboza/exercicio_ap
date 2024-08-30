#include <stdio.h>

int main() {
    int Inicio, Fim, duracao;

    printf("Digite a hora de inicio do jogo (0 a 23): ");
    scanf("%d", &Inicio);

    printf("Digite a hora de fim do jogo (0 a 23): ");
    scanf("%d", &Fim);

    if (Inicio < 0 || Inicio > 23 || Fim < 0 || Fim > 23) {
        printf("Horas invalidas. As horas devem estar entre 0 e 23.\n");
        return 1;
    }

    if (Fim >= Inicio) {
        duracao = Fim - Inicio;
    } else {
        duracao = (24 - Inicio) + Fim;
    }

    printf("A duração do jogo eh: %d horas\n", duracao);

    return 0;
}

