#include <stdio.h>

int main() {
    int numero, maior, menor, i;

    printf("Digite o numero 1: ");
    scanf("%d", &numero);
    maior = numero;
    menor = numero;

    for (i = 2; i <= 10; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
    }

    printf("\nMaior numero digitado: %d\n", maior);
    printf("Menor numero digitado: %d\n", menor);
    printf("Diferenca entre o maior e o menor: %d\n", maior - menor);

    return 0;
}
