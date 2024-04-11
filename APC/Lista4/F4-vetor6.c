#include <stdio.h>
int main (){

    int n;
    scanf("%d", &n);

    int vet1[n];  
    for (int i=0; i<n; i++){ //armazena os valores do primeiro vet
        scanf("%d", &vet1[i]);
    }
    
    int vet2[n];
    for (int i=0; i<n; i++){ //armazena os valores do segundo vet 
        scanf("%d", &vet2[i]);
    }

    int svet=0; // soma dos vetores
    for (int i=0; i<n; i++){ //laço que irá realizar a soma entre os vetores 1 e 2
        svet += vet1[i]+vet2[i]; //ex: posição vet1[0]={1} + vet2[0]={1} -- svet==2, já printa esse valor e inicia svet em 0 para fazer a próxima soma 
        printf("%d ", svet);
        svet=0;
    }
    
    return 0;
}
//lê dois vetores de mesmo tamanho e imprime a soma dos dois vetores.