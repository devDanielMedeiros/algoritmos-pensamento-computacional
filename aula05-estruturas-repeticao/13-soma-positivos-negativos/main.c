#include <stdio.h>

int main() {
    int numero;
    int somaPositivos = 0, somaNegativos = 0;
    int qtdPositivos = 0, qtdNegativos = 0;

    printf("Digite numeros inteiros (0 para encerrar):\n");
    scanf("%d", &numero);

    while (numero != 0) {
        if (numero > 0) {
            somaPositivos += numero;
            qtdPositivos++;
        } else {
            somaNegativos += numero;
            qtdNegativos++;
        }

        scanf("%d", &numero);
    }

    printf("\nSoma dos positivos: %d\n", somaPositivos);
    printf("Soma dos negativos: %d\n", somaNegativos);
    printf("Quantidade de positivos: %d\n", qtdPositivos);
    printf("Quantidade de negativos: %d\n", qtdNegativos);

    return 0;
}
