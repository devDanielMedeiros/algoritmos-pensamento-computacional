#include <stdio.h>
#include <string.h>

int main() {
    char usuario[20];
    char senha[20];

    do {
        printf("Digite o usuario: ");
        scanf("%s", usuario);

        printf("Digite a senha: ");
        scanf("%s", senha);

        if (strcmp(usuario, "admin") != 0 || strcmp(senha, "1234") != 0) {
            printf("Usuario ou senha incorretos. Tente novamente.\n\n");
        }

    } while (strcmp(usuario, "admin") != 0 || strcmp(senha, "1234") != 0);

    printf("\nLogin realizado com sucesso! Bem-vindo ao sistema.\n");

    return 0;
}
