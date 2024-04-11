#include <stdio.h>

int main(){

int qtd; //quantidade de juizes
scanf("%d", &qtd);

int notaA=0, notaB=0, notaC=0;

int nota[qtd][3];//linha,coluna 
int i;
int j;

for( i=0; i<qtd; i++){
    for( j=1; j<=3; j++){
        scanf("%d", &nota[i][j]);
}
}

for(i=0; i<qtd; i++){
    notaA+=nota[i][0];
}

for(i=0; i<qtd; i++){
    notaB+=nota[i][1];
}

for(i=0; i<qtd; i++){
    notaC+=nota[i][2];
}

//verificar o vencedor
if (notaA > notaB && notaA > notaC) {
        printf("A");
    } 

        else if (notaB > notaA && notaB > notaC) {
        printf("B");
    } 

        else if (notaC > notaA && notaC > notaB) {
        printf("C");
    } 
    
        else if (notaA == notaB && notaB == notaC) {
        printf("A, B e C");
    } 
    
        else if (notaA == notaB) {
        printf("A e B");
    } 
    
        else if (notaA == notaC) {
        printf("A e C");
    } 
    
    else if (notaB == notaC) {
        printf("B e C");
    }

return 0;
}