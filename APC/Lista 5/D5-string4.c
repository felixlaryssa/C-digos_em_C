#include <stdio.h>
#include <string.h>
#include <ctype.h> 
// biblioteca ctype.h para usar tolower 

    int main(){

        char str[10000]; // lê e armazenar a string do nome completo
        scanf("%[^\n]s", str); // quando encontrar espaços continuar lendo e so parar no '\0'

    char n1[10000];
    for(int i =0; str [i] != ' '; i++){ // laço para armazenar o primeiro nome 
        n1[i]= tolower(str[i]); // letra minuscula 
    }
    
    char ultimo[10000];
    int j=0;
    int tam = strlen(str);
    for(int i= tam-1; str[i] !=' '; i--){
        ultimo[j] = tolower (str[i]);
        j++;
    }
    
    ultimo[j+1]='\0';

    int n=0;
    char x[10000];
    for(int i = j-1; ultimo[i] !='\0'; i--){
        x[n] = ultimo[i];
        n++;
    }

    ultimo[n]='\0';

    printf("%s.%s@unb.br", n1,x);
    return 0;
    }
    //Escreva um programa que leia o nome completo do usuário e gere sua conta de e-mail da UnB.