
Claro! Aqui está um exemplo de código em C que recebe a ordem de uma matriz, recebe a matriz e imprime a soma dos elementos de cada uma das linhas:

c

Copiar código
#include <stdio.h>

int main() {
    int ordem;

    // Solicita a ordem da matriz
    printf("Informe a ordem da matriz: ");
    scanf("%d", &ordem);

    // Declara uma matriz de tamanho ordem x ordem
    int matriz[ordem][ordem];

    // Solicita os elementos da matriz
    printf("Informe os elementos da matriz:\n");
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcula e imprime a soma dos elementos de cada linha
    printf("Soma dos elementos de cada linha:\n");
    for (int i = 0; i < ordem; i++) {
        int soma = 0;
        for (int j = 0; j < ordem; j++) {
            soma += matriz[i][j];
        }
        printf("Linha %d: %d\n", i + 1, soma);
    }

    return 0;
}