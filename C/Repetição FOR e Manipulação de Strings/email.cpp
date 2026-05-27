#include <stdio.h>
#include <string.h>
#include <ctype.h>
void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}
int main() {
    char primeiroNome[50], sobrenome[50];
    char email[120];
    char dominio[] = "dominio.com";
    printf("Digite o primeiro nome: ");
    scanf("%49s", primeiroNome);
    printf("Digite o sobrenome: ");
    scanf("%49s", sobrenome);
    toLowerCase(primeiroNome);
    toLowerCase(sobrenome);
    sprintf(email, "%s.%s@%s", primeiroNome, sobrenome, dominio);
    printf("E-mail criado: %s\n", email);
    return 0;
}