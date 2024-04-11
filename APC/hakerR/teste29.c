#include <stdio.h>
#include <string.h>

int main(){

    char s[100];
    scanf("%[^\n]s", s);

    int tam = strlen (s);
    
    printf("Hello, World!");
    printf("\n");

    for(int i=0; i<tam; i++){

        printf("%c", s[i]);
    }

return 0;
}