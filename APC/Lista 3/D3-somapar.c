#include <stdio.h>

int main(){
    long int x;
    int soma = 0;


for (int i = 0; x != 0; i++){
    scanf("%ld", &x );
    //getchar;
    if ( x % 2 == 0){
        soma = soma + x;
    }
    
}
    printf("%d\n" , soma);
    return 0;
}
/*Entrada: recebe varios numeros inteiros e para quando recebe 0
Saída:composta por uma única linha contendo a soma de todos os números pares da sequência de números.*/