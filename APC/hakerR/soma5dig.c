#include <stdio.h>

int main(){

int n;
scanf("%d", &n);

int soma=0;

if (n <10000 || n > 99999){
    return 1;
}

for(int i =0; i<5; i++){
    soma += n%10;
    n/= 10; 
}

printf("%d", soma);

return 0;

}