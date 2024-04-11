#include <stdio.h>
#include <string.h>
    
    int main(){

        int n;
        scanf("%d", &n);

        int tam;
        int maior=0;
        char str[10000];
        for(int i=0; i<n; i++){ //laço normal para analisar todas as strings e dentro dele...
            scanf("%s", str);
            tam = strlen(str); //tam recebe o tamanho da string, a partir de strlen 
            if(tam>maior){ // if para analisar a maior string
             maior=tam;
            }
        }
    printf("%d", maior);
    
    return 0;
    }
    //lê N strings e imprime o tamanho da maior string lida.