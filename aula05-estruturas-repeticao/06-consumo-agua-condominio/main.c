#include <stdio.h>

int main() {
    float consumo, somaConsumo = 0;
    int i;
    const float LIMITE_MEDIA = 20.0;

    for (i = 1; i <= 5; i++) {
        printf("Digite o consumo (em m3) do morador %d: ", i);
        scanf("%f", &consumo);

        if (consumo <= LIMITE_MEDIA) {
            printf("  Morador %d esta dentro da media.\n", i);
        } else {
            printf("  Morador %d esta ACIMA da media.\n", i);
        }

        somaConsumo += consumo;
    }

    printf("\nConsumo medio geral do condominio: %.2f m3\n", somaConsumo / 5.0);

    return 0;
}
