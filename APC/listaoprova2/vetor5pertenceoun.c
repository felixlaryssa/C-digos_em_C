#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int vet[n];
    for(int i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }

    int x;
    scanf("%d", &x);

    int y=0;
    for(int i=0; i<n; i++){
        if(vet[i]==x){
        y=1;
        }
    }

    if(y == 1){
        printf("pertence");
    }
        else{ printf ("nao pertence");}
}