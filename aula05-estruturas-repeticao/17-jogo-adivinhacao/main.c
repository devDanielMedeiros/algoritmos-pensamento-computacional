#include <stdio.h>

int main() {
    int numeroSecreto = 42; /* numero fixo entre 1 e 100 */
    int palpite, tentativas = 0;
    int acertou = 0;
    const int MAX_TENTATIVAS = 10;

    printf("=== Jogo de Adivinhacao ===\n");
    printf("Tente descobrir o numero secreto entre 1 e 100.\n");
    printf("Voce tem %d tentativas.\n\n", MAX_TENTATIVAS);

    while (tentativas < MAX_TENTATIVAS && !acertou) {
        tentativas++;
        printf("Tentativa %d/%d - digite seu palpite: ", tentativas, MAX_TENTATIVAS);
        scanf("%d", &palpite);

        if (palpite == numeroSecreto) {
            printf("Parabens! Voce acertou!\n");
            acertou = 1;
        } else if (palpite < numeroSecreto) {
            printf("O numero secreto eh maior.\n\n");
        } else {
            printf("O numero secreto eh menor.\n\n");
        }
    }

    printf("\nTotal de tentativas realizadas: %d\n", tentativas);

    if (!acertou) {
        printf("Voce nao acertou. O numero secreto era: %d\n", numeroSecreto);
    }

    return 0;
}
