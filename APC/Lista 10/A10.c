#include <stdio.h>

int main(){

int qtd;
scanf("%d", &qtd);

int notas[qtd][3]; //[linha][coluna], qtd é a quantidade de juízes q usuário escolher //3

for(int i=0; i<qtd; i++){
    for(int j=0; j<3; j++){
        scanf("%d", &notas[i][j]);
    }
}

int soma[10]={0};
for(int i=0; i<qtd; i++){
    for(int j=0; j<3; j++){
    soma[j] += notas[i][j];
    }
}

    // printf("%d\n", soma[0]); //A
    // printf("%d\n", soma[1]); //B
    // printf("%d\n", soma[2]); //C
 
//verificar quem é o vencedor

if(soma[0] == soma[1] && soma[1] == soma[2]){
        printf("A, B e C");
    }

else if( soma[0]>soma[1] && soma[0]>soma[2]){
    printf("A");
}

else if( soma[1]>soma[0] && soma[1]>soma[2]){
    printf("B");
}

else if( soma[2]>soma[0] && soma[2]>soma[1]){
    printf("C");
}

    //empate

else if(soma[0]==soma[1]){
        printf("A e B");
    }

else if(soma[0] == soma[2]){
        printf("A e C");
    }

else if(soma[1]==soma[2]){
        printf("B e C");
    }


return 0;
}
//matriz