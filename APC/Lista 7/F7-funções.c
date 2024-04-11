#include <stdio.h>

int contarEstrelas(int qtd, int abertura){

int fotons[qtd];
int j=0;

    for ( int i = 0; i < qtd; i++ ){
        scanf("%d", &fotons[i]);
        int x = fotons[i] * abertura;
            if ( x >= 40000000){
                j++;
            }
    }  

    return j;
}


int main(){

int qtd, abertura;
scanf("%d", &qtd);
scanf("%d", &abertura);

int fotons[qtd];
int x;

    for ( int i = 0; i < qtd; i++ ){
        scanf("%d", &fotons[i]);
        x = contarEstrelas(qtd, abertura);
    }
printf("%d", x);

}

//verificar se o meu main etsá funcionando