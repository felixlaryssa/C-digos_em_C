#include <stdio.h>
int main (){
    int n; //tamanho do vetor
    scanf("%d", &n);
    
    int vet [n]; //vetor
    for (int i=0; i<n; i++){
        scanf("%d", &vet[i]); //laço que armazena todos os valores do vetor
    }
    
    int imenor=0;                   //declaração da variável menor
    for (int i=0; i<n; i++){       
        if (vet[i] < vet[imenor]){ //se o vetor[i]for menor que o vet[imenor], imenor vai guardar aquele vet e fazer a próxima comparação
            imenor=i;              //vai fazer esse laço ate comparar todos os números do vetor
        }                          //imenor recebe o índice daquele número
    }
    
    printf("%d\n", imenor);//printa o índice
    return 0;
    }
    //índice do menor elemento contido no vetor.