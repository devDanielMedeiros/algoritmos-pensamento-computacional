#include <stdio.h>

int main() {
    int numero, i;
    char resposta;

    do {
        printf("Digite um numero para ver a tabuada: ");
        scanf("%d", &numero);

        printf("\n--- Tabuada de %d ---\n", numero);
        for (i = 1; i <= 10; i++) {
            printf("%d x %2d = %d\n", numero, i, numero * i);
        }

        printf("\nDeseja calcular a tabuada de outro numero? (S/N): ");
        scanf(" %c", &resposta);
        printf("\n");

    } while (resposta == 'S' || resposta == 's');

    printf("Programa encerrado.\n");

    return 0;
}
