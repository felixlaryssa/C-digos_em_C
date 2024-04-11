#include <stdio.h>
int main(){
    
    int n; //tamanho do vetor
    scanf("%d", &n);
    
    int vet[n]; //vetor
    for(int i=0; i<n; i++){
        scanf("%d", &vet[i]); //laço que armazena todos os valores do vetor
    }

    int menor= 2147483647;
    int smenor=vet[1];
    int tmenor=10000;

    if(smenor<menor){
        int tmp = smenor;
        smenor = menor;
        menor = tmp;
    }

    for(int i=2; i<n; i++){ 
        if (vet[i]<menor){
        tmenor = smenor;
        smenor = menor;
        menor = vet[i]; 
        }
            else if(vet[i]<smenor){
                tmenor = smenor;
                smenor = vet[i]; 
            }
                else if(vet[i]<tmenor){
                 tmenor = vet[i];
                 }
    }

    printf("%d\n", smenor);
    printf("%d", tmenor);
    return 0;
} 

//segundo e terceiro menor elementos.