#include <stdio.h>


int main(){

    char str[1000];
    scanf("%s", str);
    int t=0;

    for(int i=0; str[i] != '\0'; i++){
        t++;
    }

    int tam=t;

    for(int i=0; i < tam; i++){
        t--;
        printf("%c", str[t]);
    }

    
    return 0;
}