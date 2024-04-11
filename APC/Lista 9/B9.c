#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){ //representa as linhas 

        for(int j=1; j<=n-i; j++){ //representa os espaços antes do *
            printf(" ");
        }
            for(int k=1; k<=2*i-1; k++){ //representa os *   condição do k = multiplica o i 2x e subtrai 1 para ficar a qtd certa de *
                printf("*");
            }
        printf("\n");// para quebrar a linha e ir para a próxima
    }
    return 0;
}

//pirâmide de *