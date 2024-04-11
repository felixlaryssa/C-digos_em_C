#include <stdio.h>
int main(){
    int n; //tamanho do vetor
    scanf("%d" , &n);

    int vet[n]; //tamanho do vetor
    for (int i=0; i<=n; i++){
        sacanf("%d", &vet[i]); //laço que armazena todos os valores do vetor
    }

    int imenor=0;       //declaração da variável menor
    for (int i=0; i<n; i++){
        if(vet[i] < vet[imenor]){ //se o vetor[i] for menor que o vet[imenor], imenor vai guardar auquele vet e vai fazer
            imenor=i;            //esse laço até comparar todos os números do vetor
                                //imenor recebe o indice daquele vetor
        }
    }

    printf("%d\n", imenor); //printa o índice
    return 0;
}