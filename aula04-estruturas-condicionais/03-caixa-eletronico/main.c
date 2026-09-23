#include <stdio.h>

int main() {
    int valores[6] = {200, 100, 50, 20, 10, 5};
    int estoque[6] = {5, 5, 10, 10, 10, 10}; /* quantidade de cada nota no caixa */
    int usadas[6] = {0, 0, 0, 0, 0, 0};
    int saque, restante, i, totalCedulas;

    printf("Digite o valor do saque: ");
    scanf("%d", &saque);

    /* Verifica se o valor eh valido: positivo e multiplo de 5 (a menor nota) */
    if (saque <= 0) {
        printf("Valor invalido: o saque deve ser positivo.\n");
        return 0;
    }
    if (saque % 5 != 0) {
        printf("Valor invalido: o saque deve ser multiplo de R$5.\n");
        return 0;
    }

    restante = saque;
    totalCedulas = 0;

    for (i = 0; i < 6; i++) {
        int maxUtilizavel = estoque[i] - 1; /* preserva 1 nota de cada denominacao */
        if (maxUtilizavel < 0) {
            maxUtilizavel = 0;
        }

        int quantidadeNecessaria = restante / valores[i];
        int quantidadeUsada = (quantidadeNecessaria < maxUtilizavel) ? quantidadeNecessaria : maxUtilizavel;

        usadas[i] = quantidadeUsada;
        restante -= quantidadeUsada * valores[i];
        totalCedulas += quantidadeUsada;
    }

    if (restante != 0) {
        printf("Nao eh possivel realizar o saque de R$%d sem violar a regra\n", saque);
        printf("de preservar pelo menos uma nota de cada denominacao.\n");
        return 0;
    }

    printf("Saque de R$%d aprovado! Notas a serem entregues:\n", saque);
    for (i = 0; i < 6; i++) {
        if (usadas[i] > 0) {
            printf("  %d nota(s) de R$%d\n", usadas[i], valores[i]);
        }
    }
    printf("Total de cedulas entregues: %d\n", totalCedulas);

    return 0;
}
