#include <stdio.h>

int encaixa(int a, int b){
    int i,j;
    int newB = b;
    int aux=1;

    for(i=0; b!=0; i++){
        b/=10;
        aux=aux*10;
    }

    if((a%aux)==newB){
        return 1;
    }
    else{
        return 0;
    }
}

int segmento(int a, int b){

int i,j, pertence=0, aux=1, armazena;
    
    if(a>b){
        armazena=b;
        for(i=0;b!=0;i++){
            b=b/10; //conta a qtd de casas de b 
            aux=aux*10; //algarismo q esta sendo mutiplicado varia de acordo com a qtd de casas de b para dps fazer a comparaçao usando %
        }
        while(a>0){
            j=a%aux; //comparação
            if(armazena==j){
                pertence=1;
            }
            a=a/10;
        }
    }
    else if(b>a){
        armazena=a;
        for(i=0;a!=0;i++){
            a=a/10;
            aux=aux*10;
        }
        while(b>0){
            j=b%aux;
            if(armazena==j){
                pertence=1;
            }
            b=b/10;
        }
    }
    else{
        pertence=1;
    }
    return pertence;
}