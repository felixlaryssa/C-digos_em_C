#include <stdio.h>
int main (){
    int n;
    scanf ("%d", &n);

    int vet[10000];
    for (int i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }

    int x, y = 0;
    scanf("%d", &x);
        
    for (int i=0; i<n; i++){
        if (x == vet[i]){ // número x igual a algum valor de vet[i]
            y=1; //dígito verificador, se essa condição bater y passa a valer 1 
        }
    }

    if(y==1){ //se y for 1 imprime pertence
        printf("pertence");
    }
        else{
           printf("nao pertence"); 
        }

return 0;
}
//lê um vetor e um número após o vetor e diz se este número está contido no vetor.