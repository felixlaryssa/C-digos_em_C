#include <stdio.h>

    int main(){
        int n;
        scanf("%d", &n);

        int vet[n]; //lê e armazenar o vetor
        for(int i=0; i<n; i++){
            scanf("%d", &vet[i]);
        }

        for(int i= n-1; i>=0; i--){ // começa  a ler o vetor do final dele e vai imprimindo
            printf("%d ", vet[i]);
        }

    return 0;
    }
    //lê um vetor e inverter ele.