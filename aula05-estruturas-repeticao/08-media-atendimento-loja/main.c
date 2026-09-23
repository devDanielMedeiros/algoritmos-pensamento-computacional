#include <stdio.h>

int main() {
    float nota, somaNotas = 0, media;
    int i;

    for (i = 1; i <= 10; i++) {
        printf("Digite a nota de atendimento do cliente %d (0 a 10): ", i);
        scanf("%f", &nota);
        somaNotas += nota;
    }

    media = somaNotas / 10.0;

    printf("\nMedia geral de atendimento: %.2f\n", media);

    if (media < 7.0) {
        printf("ALERTA: a media de atendimento esta abaixo do esperado!\n");
    } else {
        printf("A media de atendimento esta dentro do esperado.\n");
    }

    return 0;
}
