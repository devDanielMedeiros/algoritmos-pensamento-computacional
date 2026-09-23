#include <stdio.h>

int main() {
    int a, b, c;
    int maior, menor, intermediario;

    printf("Digite tres numeros inteiros (A B C): ");
    scanf("%d %d %d", &a, &b, &c);

    /* Maior valor */
    if (a >= b && a >= c) {
        maior = a;
    } else if (b >= a && b >= c) {
        maior = b;
    } else {
        maior = c;
    }

    /* Menor valor */
    if (a <= b && a <= c) {
        menor = a;
    } else if (b <= a && b <= c) {
        menor = b;
    } else {
        menor = c;
    }

    /* Valor intermediario: soma dos tres menos o maior e o menor.
       Funciona mesmo com repetidos, pois estamos somando os proprios
       valores lidos (nao indices), apenas com comparacoes previas. */
    intermediario = a + b + c - maior - menor;

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Valor intermediario: %d\n", intermediario);

    /* Valores repetidos e iguais */
    if (a == b && b == c) {
        printf("Os tres valores sao iguais.\n");
    } else if (a == b || a == c || b == c) {
        printf("Existem valores repetidos entre os tres numeros.\n");
    } else {
        printf("Nao existem valores repetidos.\n");
    }

    /* Ordem crescente */
    if (a < b && b < c) {
        printf("Os valores estao em ordem crescente (A < B < C).\n");
    } else {
        printf("Os valores NAO estao em ordem crescente (A < B < C).\n");
    }

    /* Ordem decrescente */
    if (a > b && b > c) {
        printf("Os valores estao em ordem decrescente (A > B > C).\n");
    } else {
        printf("Os valores NAO estao em ordem decrescente (A > B > C).\n");
    }

    return 0;
}
