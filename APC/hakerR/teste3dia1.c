#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int mat[n];

    for(int i=0; i<n; i++){
        scanf("%d", &mat[i]);
    }

    int soma=0;
    for(int i=0; i<n; i++){
        soma += mat[i];
    }

    printf("%d\n", soma);
}

//Imprima a soma dos inteiros na matriz.