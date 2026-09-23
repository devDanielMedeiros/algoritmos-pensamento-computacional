#include <stdio.h>

int main() {
    int numero, i;
    int qtdPares = 0, qtdImpares = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            printf("  %d eh PAR\n", numero);
            qtdPares++;
        } else {
            printf("  %d eh IMPAR\n", numero);
            qtdImpares++;
        }
    }

    printf("\nQuantidade de numeros pares: %d\n", qtdPares);
    printf("Quantidade de numeros impares: %d\n", qtdImpares);

    return 0;
}
