#include <stdio.h>

#define MAX_SIZE 500

int main() {
    int N;
    int mapa[MAX_SIZE][MAX_SIZE];

    // Leitura do tamanho do mapa
    scanf("%d", &N);

    // Leitura do mapa
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &mapa[i][j]);
        }
    }

    // Impressão do caminho de reflorestamento
    int caminho = 0;

    // Verificação de caminho
    for (int i = 0; i < N; i++) {
        if (mapa[0][i] == 0) {
            caminho = i + 1;
            break;
        }
    }

    // Impressão do resultado
    printf("%d\n", caminho);

    return 0;
}
