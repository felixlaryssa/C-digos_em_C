#include <stdio.h>
#include <ctype.h>
  
    int main(){
    
    int n;
        scanf("%d", &n);
    int tam=0;
    int x=0;
    char alfabeto[]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
    'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    char str[42];
    for(int i=0; i<n; i++){
        scanf("%s", str);

            for(int j=0; str[j] != '\0'; j++){
                tam++;
            }
            for(int i=0; i<tam; i++){
                if(alfabeto[i]<= tolower(str[i])){
                    x++;
                }
            }
    if(x==tam){
        printf("%s: O\n", str);
    }
        else{
            printf("%s: N\n", str);
            }
    tam=0;
    x=0;
    }
    
    return 0;
}
//Dada uma palavra, determine se ela é ordenada. imprima O para ordenada e N caso contrario
        