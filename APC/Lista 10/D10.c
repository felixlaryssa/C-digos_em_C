#include <stdio.h>

int main(){

int n1, n2;
scanf("%d %d", &n1, &n2);

int i=1;
int contador=0;

while( i<=n1 && i<=n2){ // enquanto o i for menor ou igual a n1 e n2 está calculando os divisores 
     if (n1 % i == 0 && n2 % i == 0){ //se o resto de n1 e n2 dividido por i for 0, o contador conta 1, analisa os divisores em comum
          contador++;
     }
i++;//loop
}

if(contador == 1){ //se o contador for 1, significa q o unico divisor em comum é o 1
     printf("1"); //somente o 1 é divisor comum de ambos
}

     else {printf("0");} //tem mais de um divisor comum

return 0;
}

//Numeros coprimos sao dois numeros naturais diferentes onde o unico inteiro que divide ambos é o
//numero 1. Dado dois n´umeros, diga se ambos s˜ao n´umeros coprimos ou n˜ao.

        