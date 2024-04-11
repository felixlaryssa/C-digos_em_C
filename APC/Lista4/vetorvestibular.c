#include <stdio.h>

    int main(){
        int n;
        scanf("%d", &n);

        char gabarito[n];
        scanf("%s", gabarito[n]);

        char resposta[n];
        scanf("%s", resposta[n]);

        int acertos=0;
        for(int i=0; i<n; i++){
            if(gabarito[i]==resposta[i]){
            acertos++;
            }
        }
        printf("%d", acertos);

    }
    //entrada 1 gabarito, entrada 2 resposta, verifique quantas questoes o aluno acertou
    // ta imprimindo 1 a mais