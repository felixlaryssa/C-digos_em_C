#include <stdio.h>
int main (){
    
    int A, B, C;
    char empate;

    scanf("%d %d %d" , &A, &B, &C);
    scanf("%c" , &empate);
    
    if (A==0 && B==1 && C==1){
        printf("A");
        return 0;
    }
    if (A==1 && B==0 && C==0){
          printf("A");
          return 0;
    }

    if (B==0 && A==1 && C==1){
        printf("B");
        return 0;
    }
    if (B==1 && A==0 && C==0){
      printf("B");
      return 0;
    }

    if (C==0 && A==1 && B==1){
        printf("C");
        return 0;
    }
    if (C==1 && A==0 && B==0){
        printf("C");
        return 0;
    }

    if (A==B && A==C){
        printf("empate");
        return 0;
    }
}
/*Escreva um programa em C que receba os valores que os tres jogadores colocaram e determine quem
venceu a brincadeira.
*/