#include <stdio.h>
#include <string.h>
  
    int main(){
        char str[10000];
        int t=0;
        
        while(scanf("%s", str) != EOF){
            for(int i=0; str[i]!='\0'; i++){
                if(str[i]=='o'){
                t++;
                }
            }
        }
    printf("%d\n", t);
    return 0;
    }
    // imprimir a quantidade de caracteres ‘o’ (o minúsculo) lidos.