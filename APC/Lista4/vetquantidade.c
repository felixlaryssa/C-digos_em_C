#include <stdio.h>

    int main(){
        int n;
        scanf("%d", &n);

        int vet[n];
        for(int i=0; i<n; i++){
            scanf("%d", &vet[i]);
        }

        int quantidade=0;
        for(int i=0; i<n; i++){
            if(vet[i] != vet[i+1]){
                quantidade++;
            }
        }
        printf("%d\n", quantidade);
       
    }
    //diz a quantidade de números distintos dentro do vetor
    //provavel prova