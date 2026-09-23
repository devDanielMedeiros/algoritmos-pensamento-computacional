#include <stdio.h>

int main() {
    char nome[50];
    float nota;
    int contador = 1; /* contador de alunos */

    while (contador <= 3) {
        printf("Digite o nome do aluno %d: ", contador);
        scanf(" %[^\n]", nome); /* le o nome, inclusive com espacos */

        printf("Digite a nota de %s: ", nome);
        scanf("%f", &nota);

        printf("\n--- Dados do aluno %d ---\n", contador);
        printf("Nome: %s\n", nome);
        printf("Nota: %.2f\n", nota);
        printf("-------------------------\n\n");

        contador++;
    }

    return 0;
}
