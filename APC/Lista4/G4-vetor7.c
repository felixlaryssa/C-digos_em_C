#include <stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    
    int vet1[n]; 
    for(int i=0; i<n; i++){ // armazena os valores do vetor 1
        scanf("%d", &vet1[i]);
    }

    int vet2[n];
    for(int i=0; i<n; i++){ // armazena os valores do vetor 2
        scanf("%d", &vet2[i]);
    }

    if(vet1 == vet2){ // se o vetor 1 for igual ao vetor 2, imprime sim
        printf("sim"); 
    }
        else{ // caso contrário imprime não
            printf("nao");
        }
    
    return 0;
}
//lê dois vetores de mesmo tamanho e informa se o segundo vetor é idêntico ao primeiro vetor, ou
//seja, se todos os elementos do segundo vetor estão contidos no primeiro vetor, mantendo a mesma ordem dos elementos.
