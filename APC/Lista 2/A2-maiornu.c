#include <stdio.h>
int main ()
{
    int n1, n2, n3, n4;

    scanf("%d %d %d %d" , &n1,&n2,&n3,&n4);

        if(n1>=n2 && n1>=n3 && n1>=n4){
            printf("%d" , n1);
            return 0;
        }

        if(n2>=n1 && n2>=n3 && n2>=n4){
            printf("%d" , n2);
            return 0;
        }

        if(n3>=n1 && n3>=n2 && n3>=n4){
            printf("%d" , n3);
            return 0;
        }

        if(n4>=n1 && n4>=n2 && n4>=n3){
            printf("%d" , n4);
            return 0;
        }
            
}

/*Faça um programa que leia quatro números inteiros e retorne o maior entre eles. Se houver números repetidos que forem
os maiores, imprima qualquer um deles.
*/