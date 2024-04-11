#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int vet1[n];
    for(int i=0; i<n; i++){
        scanf("%d", &vet1[i]);
    }

    int vet2[n];
    for(int i=0; i<n; i++){
        scanf("%d", &vet2[i]);
    }

    int soma=0;

    for(int i=0; i<n; i++){
        soma= vet1[i] + vet2[i];
        printf("%d ", soma);
    }
    return 0;
}