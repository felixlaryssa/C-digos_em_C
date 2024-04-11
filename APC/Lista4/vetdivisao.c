#include <stdio.h>

    int main(){
        int n;
        scanf("%d", &n);

        int vet1[n]; //lê e armazenar o vetor 1
        for(int i=0; i<n; i++){
            scanf("%d", &vet1[i]);
        }

        int vet2[n]; //lê e armazenar o vetor 2
        for(int i=0; i<n; i++){
            scanf("%d", &vet2[i]);
        }

        for(int i=0; i<n; i++){ //laço q vai fazer o q se pede
            if(vet2[i]==0){ // se o vetor 2 for 0, imprimir NaN
                printf("NaN ");
            }
                else{
                    printf("%d ", vet1[i]/vet2[i]); // se não for 0 fazer a divisão
                }
        }
    return 0;
    }
    // inserir 2 vetore e fazer a divisão deles