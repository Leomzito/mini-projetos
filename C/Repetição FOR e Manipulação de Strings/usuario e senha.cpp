#include <stdio.h>
#include <string.h>
int main() {
    char usuario[20];
    char senha[20];
    printf("Digite o nome de usuário: ");
    scanf("%19s", usuario);
    printf("Digite a senha: ");
    scanf("%19s", senha);
    if (strcmp(usuario, "admin") == 0 && strcmp(senha, "admin123") == 0) {
        printf("Login bem-sucedido!\n");
    } else {
        printf("Usuário ou senha inválidos!\n");
    }
    return 0;
}