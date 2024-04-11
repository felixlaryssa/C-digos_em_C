#include <stdio.h>
#include <string.h>
    
    int main(){

        
        char str[10000]; //lê e armazena a string 
        scanf("%s", str); // sem &comercial

        int t=0;
        for(int i=0; str[i] != '\0'; i++){ // laço q conta o tamanho da string e para quando encontra o '\0'
            t++;
        }
        
    
        printf("%d\n", t); // printa o tamanho da string 
      
    return 0;
    }
    // lê uma string e imprime o tamanho string lida

    