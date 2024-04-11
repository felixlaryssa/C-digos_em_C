#include <stdio.h>

int maior_numero( int n, int vet[]){

int maior=0;
    for(int i=0; i<n-1; i++){
        if(vet[i]>vet[i+1]){
            maior = vet[i];
    }
}

    return maior;

}

int main() {

    int n;
    scanf("%d", &n);
    int vet[n];
    for(int i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }

    int x= maior_numero( n, vet);
    printf("%d\n", x);

return 0;
}

//funcao recebe um vetor de tamanho n e diz qual o maior elemento daquele vetor
//