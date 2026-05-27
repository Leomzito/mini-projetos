#include <stdio.h>
#include <string.h>
int main() {
    char nome[5][50];
    int idade[5];
    char nome_mais_velho[50];
    int idade_mais_velha = -1;
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        fgets(nome[i], sizeof(nome[i]), stdin);
        nome[i][strcspn(nome[i], "\n")] = '\0';
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade[i]);
        getchar();
        if (idade[i] > idade_mais_velha) {
            idade_mais_velha = idade[i];
            strcpy(nome_mais_velho, nome[i]);
        }
    }
    printf("A pessoa mais velha é %s com %d anos.\n", nome_mais_velho, idade_mais_velha);
    return 0;
}