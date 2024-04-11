#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int vet [n];
    for(int i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }

    int par[n];
    int impar[n];
    for(int i=0; i<n; i++){
        if(vet[i] % 2 == 0){
        par[i] = vet[i];
         printf("%d", par[i]);
        }
    }
    
    printf("\n");
    
    for(int i=0; i<n; i++){
        if (vet[i] % 2 != 0){
        impar[i] = vet[i];
        printf("%d", impar[i]);
        }
    }
        
    
    
    return 0;
    }

   
    