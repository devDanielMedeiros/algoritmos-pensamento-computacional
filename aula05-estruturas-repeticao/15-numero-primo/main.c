#include <stdio.h>

int main() {
    int numero, divisor, ehPrimo;
    char continuar;

    do {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);

        if (numero <= 1) {
            ehPrimo = 0; /* 0 e 1, por definicao, nao sao primos */
        } else {
            ehPrimo = 1;
            for (divisor = 2; divisor < numero; divisor++) {
                if (numero % divisor == 0) {
                    ehPrimo = 0;
                    break; /* ja encontramos um divisor, nao precisa continuar */
                }
            }
        }

        if (ehPrimo) {
            printf("%d eh PRIMO.\n", numero);
        } else {
            printf("%d NAO eh primo.\n", numero);
        }

        printf("Deseja testar outro numero? (s/n): ");
        scanf(" %c", &continuar);
        printf("\n");

    } while (continuar == 's' || continuar == 'S');

    printf("Programa encerrado.\n");

    return 0;
}
