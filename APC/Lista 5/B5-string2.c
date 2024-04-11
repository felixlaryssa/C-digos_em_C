#include <stdio.h>

    int main(){
        char str[10000]; // lê e armazena a string
        scanf("%s", str);

        int t=0;
        for(int i=0; str[i] != '\0'; i++){ // armazena o tamanho da string 
            t++;
        }

        int Tam=t; // cria outra variavel p receber o valor de t 

        for(int i=0; i<Tam; i++){ //começa a contar de trás(decrementando) para frente e vai printando cada caractere   
                t--;
                printf("%c", str[t]);
        }
       

    return 0;
    }
    //  lê uma string e imprime ao contrário.