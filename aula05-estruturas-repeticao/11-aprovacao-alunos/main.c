#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    char continuar;
    int aprovados = 0, recuperacao = 0, reprovados = 0;

    do {
        printf("Digite as 3 notas do aluno (separadas por espaco): ");
        scanf("%f %f %f", &n1, &n2, &n3);

        media = (n1 + n2 + n3) / 3.0;
        printf("Media do aluno: %.2f -> ", media);

        if (media >= 7.0) {
            printf("Aprovado\n");
            aprovados++;
        } else if (media >= 5.0) {
            printf("Recuperacao\n");
            recuperacao++;
        } else {
            printf("Reprovado\n");
            reprovados++;
        }

        printf("Deseja lancar outro aluno? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("\n--- Resumo da turma ---\n");
    printf("Aprovados: %d\n", aprovados);
    printf("Recuperacao: %d\n", recuperacao);
    printf("Reprovados: %d\n", reprovados);

    return 0;
}
