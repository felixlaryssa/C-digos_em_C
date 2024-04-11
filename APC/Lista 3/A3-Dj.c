#include <stdio.h>
int main(){
    int x;
    scanf("%d" , &x);

    for(int i=0; i < x; i++){
        if (i % 2 == 0){ // Se o resto da divisão da linha(i) por 2 for 0 (linha par), imprimir 3 batidas
            printf("THUMS THUMS THUMS\n");
        }

            else{ //se não imprimir 6 (resto da divisão diferente de 0)
                printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
            }
    }
    printf("\n");
    return 0;
}

/*Entrada: número N que representa a quantidade de linhas com batidas
Saída: nas linhas impares imprima 3 vezes a palavra THUMS, nas linhas pares imprima 6 vezes.*/
