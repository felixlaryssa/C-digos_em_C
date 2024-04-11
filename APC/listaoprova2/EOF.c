#include <stdio.h>
#include <string.h>

int main(){

    char str[1000];
    int t=0;

    while (scanf("%s", str) !=  EOF){
        t++;
    }

    printf("%d", t);

return 0;
}