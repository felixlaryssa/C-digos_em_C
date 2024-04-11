#include <stdio.h>
#include <string.h>

int main(){

    char str[1000];
    scanf("%s", str);
    int t=0;

    for(int i=0; str[i] != '\0'; i++){
        t++;
    }

    printf("%d", t);
    return 0;
}