#include <stdio.h>

int main(){

    int n; //tamanho do evtor
    scanf("%d", &n);

    int vet[n]; //laço para armazenar vetor
    for(int i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }

    int menor=0;
    int i;
    for( i=0; i<n; i++){ //laço da lógica
        if(vet[i]<vet[menor]){ //se o vetor na posição i for menor q o vetor menor q começa em 0
            menor=i; //variável maior armazena esse menor
        }
    }

    printf("%d", menor); //printa o indice desse maior

    return 0;
}

//imprime o indice do maior vetor