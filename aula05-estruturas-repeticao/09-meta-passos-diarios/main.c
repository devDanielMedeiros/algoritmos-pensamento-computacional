#include <stdio.h>

int main() {
    int passosHora, totalPassos = 0, horas = 0;
    const int META = 10000;

    while (totalPassos < META) {
        horas++;
        printf("Digite a quantidade de passos na hora %d: ", horas);
        scanf("%d", &passosHora);
        totalPassos += passosHora;
        printf("Total acumulado: %d passos\n", totalPassos);
    }

    printf("\nMeta de %d passos atingida!\n", META);
    printf("Foram necessarias %d hora(s) para atingir a meta.\n", horas);

    return 0;
}
