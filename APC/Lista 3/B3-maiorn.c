#include <stdio.h>
int main(){
    int n;
    int maior =-2147483648;
    int x;

scanf("%d", &n);


for (int i = 0; i< n; i++){
    scanf("%d", &x );
    if ( x > maior){
        maior = x;
    }
}
    printf("%d" , maior);
    return 0;  
}

/*O objetivo neste exercício é simples: você deve ler n números e determinar o maior entre eles.
entrada: quantidade N de numeros*/