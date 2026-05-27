#include <stdio.h>
#include <string.h>
int main() {
    char senha[20];
    while (1) {
        printf("Digite a senha: ");
        scanf("%s",senha);
        if (strcmp(senha, "1234") == 0) {
            printf("Senha correta! Acesso permitido.\n");
            break;
        } else {
            printf("Senha incorreta. Tente novamente.\n");
        }
    }
}