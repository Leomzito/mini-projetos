
#include <stdio.h>
#include <windows.h> //biblioteca do Windows (aqui usada para SetConsoleOutputCP, que altera o encoding do console)

int main() {
    SetConsoleOutputCP(65001); //Biblioteca do Windows (aqui usada para SetConsoleOutputCP, que altera o encoding do console)
    int matriz[3][3];
    int soma = 0;

    printf("Digite os elementos da matriz 3x3: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("Soma de todos os elementos: %d\n", soma);
    return 0;
}