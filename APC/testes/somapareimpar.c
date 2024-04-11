#include <stdio.h>
int main(){

    int x;
    int somapares=0;
    int somaimpares=0;


    for(int i=0; x != 0; i++){
        scanf("%d", &x);
        if(x % 2 == 0){
            somapares = somapares + x;
        } else{
            somaimpares = somaimpares + x;
        }
    }

    printf("%d%d\n", somapares, somaimpares);
    return 0;

}