#include <stdio.h>

int main() {
    float total = 0;
    int opcao;

    printf("=== Cofrinho Digital ===\n");

    do {
        printf("\nEscolha a moeda para adicionar:\n");
        printf("  1 - R$0,50\n");
        printf("  2 - R$1,00\n");
        printf("  3 - R$2,00\n");
        printf("  0 - Parar e ver o total\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                total += 0.50;
                break;
            case 2:
                total += 1.00;
                break;
            case 3:
                total += 2.00;
                break;
            case 0:
                break;
            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    printf("\nTotal acumulado no cofrinho: R$%.2f\n", total);

    return 0;
}
