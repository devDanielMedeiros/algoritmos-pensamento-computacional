#include <stdio.h>

int main() {
    int curtidas;
    int soma = 0;
    float media;
    int i;

    for (i = 1; i <= 5; i++) {
        printf("Digite o numero de curtidas do post %d: ", i);
        scanf("%d", &curtidas);
        soma += curtidas;
    }

    media = soma / 5.0;

    printf("\nMedia de curtidas dos 5 posts: %.2f\n", media);

    return 0;
}
