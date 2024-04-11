#include <stdio.h>
#include <string.h>

int main (){

    char x;
    scanf("%c", &x);

    char palavra[100];
    scanf(" %[^\n]", palavra);

    char frase[100];
    
    while(scanf(" %[^\n]s", frase) != EOF){

    }

    printf("%c\n", x);
    printf("%s\n", palavra);
    printf("%s", frase);
    

return 0;
}