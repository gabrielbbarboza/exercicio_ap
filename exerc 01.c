#include <stdio.h>

int main() {
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor > 10) {
        printf("EH MAIOR QUE 10!\n");
    } else {
        printf("NAO EH MAIOR QUE 10!\n");
    }

    return 0;
}

