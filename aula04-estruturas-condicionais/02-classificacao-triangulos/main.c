#include <stdio.h>

int main() {
    int a, b, c;
    int maior, quadMaior, somaOutrosQuad;

    printf("Digite os tres lados do triangulo (inteiros): ");
    scanf("%d %d %d", &a, &b, &c);

    /* 1) Verifica se os lados formam um triangulo valido */
    if (a <= 0 || b <= 0 || c <= 0 ||
        (a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("Os valores informados NAO formam um triangulo.\n");
        return 0;
    }

    printf("Os valores formam um triangulo.\n");

    /* 2) Classificacao quanto aos lados */
    if (a == b && b == c) {
        printf("Classificacao quanto aos lados: Equilatero\n");
    } else if (a == b || a == c || b == c) {
        printf("Classificacao quanto aos lados: Isosceles\n");
    } else {
        printf("Classificacao quanto aos lados: Escaleno\n");
    }

    /* 3) Classificacao quanto aos angulos, sem usar funcoes prontas.
       Descobre o maior lado comparando os tres, sem vetor nem funcao. */
    if (a >= b && a >= c) {
        maior = a;
        somaOutrosQuad = b * b + c * c;
    } else if (b >= a && b >= c) {
        maior = b;
        somaOutrosQuad = a * a + c * c;
    } else {
        maior = c;
        somaOutrosQuad = a * a + b * b;
    }

    quadMaior = maior * maior;

    if (quadMaior == somaOutrosQuad) {
        printf("Classificacao quanto aos angulos: Retangulo\n");
    } else if (quadMaior < somaOutrosQuad) {
        printf("Classificacao quanto aos angulos: Acutangulo\n");
    } else {
        printf("Classificacao quanto aos angulos: Obtusangulo\n");
    }

    return 0;
}
