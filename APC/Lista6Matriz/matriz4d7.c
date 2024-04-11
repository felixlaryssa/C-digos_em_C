#include <stdio.h>

int main() {
    int linhas, colunas;

    scanf("%d %d", &linhas, &colunas);
    getchar(); 

    char caracter[500];
    int numero[500];
    int i = 0;
    while (scanf(" %c%d", &caracter[i], &numero[i]) != EOF) { 
        i++;
    }

    
    char letra = 'A' + linhas - 1; 

    printf(" ");
    for (int j = 0; j < colunas; j++) {
        printf(" %02d", j+1); 
    }

    printf("\n");

    for (int j = linhas - 1; j >= 0; j--) {
        printf("%c ", letra--); 
        for (int k = 0; k < colunas; k++) 
        {
            int ocupado = 0;
            for (int l = 0; l < i; l++) {
                if (caracter[l] == 'A' + j && numero[l] == k+1) {
                    ocupado = 1;
                    break;
                }
            }
            
            if (ocupado) {
                printf("XX ");
            } else {
                printf("-- ");
            }
        }
        printf("\n");
    }

    return 0;
}
