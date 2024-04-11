#include <stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);

    int vet[n];
    for(int i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }

    int par[n];
    int indpar=0;
    int impar[n];
    int indimpar=0;

    for(int i=0; i<n; i++){
        if(vet[i] % 2 == 0){
            par[i] = vet[i];
            indpar = i;
            printf("%d", indpar);
        }
    }

    printf("\n");

    for(int i=0; i<n; i++){
        if(vet[i] % 2 != 0){
            impar[i]=vet[i];
            indimpar = i;
            printf("%d", indimpar);
        }
    }
return 0;
}