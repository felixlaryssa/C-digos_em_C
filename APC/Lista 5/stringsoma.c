#include <stdio.h>

     int main(){
        int n;
        scanf("%d", &n);

        char str[1000];

        int soma;
        for(int i=0; i<n; i++){
            soma=0;
            scanf("%s", str);

        for(int i=0; str[i]!='\0'; i++){
            if(str[i]=='0' || str[i]=='1' || str[i]=='2' || str[i]=='3' || str[i]=='4' || str[i]==5 ||
                 str[i]==6 || str[i]==7 || str[i]==8 || str[i]==9 || str[i]==0)
                soma += str[i]-48;
        }
        printf("%d\n", soma);
        }
    return 0;
     }
     //nao ta dando certo