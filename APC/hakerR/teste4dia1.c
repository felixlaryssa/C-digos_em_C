#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int mat[n];

    for(int i=0; i<n; i++){ //laço para armazenar a matriz de 1D
        scanf("%d", &mat[i]);
    }

    for(int i=n-1; i>=0; i--){ //i começa na ultima posição e vai decrementando enquanto for maior ou igual a 0
        printf("%d ",mat[i]);
    }

    
return 0;
}
//imprime o inverso da matriz
