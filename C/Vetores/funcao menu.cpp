#include <stdio.h>
#include <windows.h> 
 
void exibirMenu() {
    printf("Menu de Opções:\n");
    printf("1. Cadastrar\n");
    printf("2. Listar\n");
    printf("3. Sair\n");
}

int main() {
    SetConsoleOutputCP(65001);
    exibirMenu();
    return 0;
}