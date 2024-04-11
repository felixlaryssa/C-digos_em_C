#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int vet[n];
    int m;
    int s=0;
    int x=0;

    for (int i=0; i<n; i++){
        scanf("%d", &vet[i]); // armazena os valores do vetor 
        s += vet[i]; // soma os valores do vetor
    }
    
    m= s/n; // média == soma/pelo valor n -- até aq somente a parte da média 

    for (int i=0; i<n; i++){ // a partir dq começa a analisar(individualmente) se o vetor é maior q o resultado da média feita
    if(vet[i]>m){
        printf("%d ", vet[i]); // se for maior printa esse valor e incrementa 1 em x e analisa o próximo número
        x++;
    }
    }
    if(x == 0){ //Caso não haja elementos maiores que a média, imprimir  0
        printf("%d ", x);
    }

    return 0;
}
// recebe uma sequência de números naturais e exibe todos os elementos que são maiores que a média aritmética
// desta sequencia. 
