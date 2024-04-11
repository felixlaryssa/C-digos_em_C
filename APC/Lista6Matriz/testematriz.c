#include <stdio.h>

    int main(){
        int n;
        scanf("%d", &n);

        int mat[n][n];
        for(int i=0; i<n; i++){ // lê e armazena a matriz
                for(int j=0; j<n; j++){
                    scanf("%d", &mat[i][j]);
                }
        }

        int s=0;
        int maior=0;
        int x=0;
        for(int i=0; i<n; i++){ 
            for(int j=0; j<n; j++){
                s+= mat[j][i]; // inverte i e j para realizar soma dos valores de cada coluna, primeiro [] é o q fica parado e o segundo[] é o q varia, coluna j vai ficar parada e a linha i vai variar
        }
        if(s>maior){ // condição para ser a maior soma 
            maior=s;
            x = i; // x representa indice da coluna 
        }
        s=0;
        }
    printf("%d %d", x, maior); // printa o indice da coluna com maior a soma e o valor dessa soma
    return 0;
    }
    //soma as coluna da matriz e imprime o indice da q tem a maior soma e o valor dessa soma 