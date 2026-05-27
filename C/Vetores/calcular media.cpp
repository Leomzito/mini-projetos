#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    float notas[4];
    float calcularMedia (float vetor[], int tamanho);
    float media;

    printf("Digite quatro notas: \n");
    for (int i = 0; i < 4; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    media = calcularMedia(notas, 4);
    printf("Média das notas: %.2f\n", media);
    return 0;
}

float calcularMedia(float vetor[], int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma / tamanho;
}