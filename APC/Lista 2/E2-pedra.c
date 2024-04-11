#include <stdio.h>
int main()
{
    int A, B;
    
    scanf("%d %d" , &A, &B );


    if((A == 0 ) && (B == 3 )){
        printf("A"); 
    }
        else if((A == 3 ) && (B == 0)){
        printf("B");
        }


    if((A == 3 ) && (B == 2)){
        printf("B"); 
    }
        else if((A == 2 ) && (B == 3)){
        printf("A");
        }


    if((A == 1 ) && (B == 4)){
        printf("A"); 
    }
        else if((A == 4 ) && (B == 1)){
        printf("B");
        }


    if((A == 3 ) && (B == 4)){
        printf("A"); 
    }
        else if((A == 4 ) && (B == 3)){
        printf("B");
        }


    if((A == 3 ) && (B == 1)){
        printf("A"); 
    }
        else if((A == 1 ) && (B == 3)){
        printf("B");
        }


    if((A == 4 ) && (B == 2)){
        printf("A"); 
    }
        else if((A == 2 ) && (B == 4)){
        printf("B");
        }


    if((A == 4 ) && (B == 0)){
        printf("A"); 
    }
        else if((A == 0 ) && (B == 4)){
        printf("B");
        }

    if((A == 0 ) && (B == 2)){
        printf("A"); 
    }
        else if((A == 2 ) && (B == 0)){
        printf("B");
        }

    if((A == 1 ) && (B == 0)){
        printf("A"); 
    }
        else if((A == 0 ) && (B == 1)){
        printf("B");
        }
    
    if((A == 2 ) && (B == 1)){
        printf("A"); 
    }
        else if((A == 1 ) && (B == 2)){
        printf("B");
        }


    if((A == 0 ) && (B == 0)) {
        printf("empate"); 
    } 

    if((A == 1 ) && (B == 1)) {
        printf("empate");
    }

    if((A == 2 ) && (B == 2)) {
        printf("empate");
    }
    
    if((A == 3 ) && (B == 3)) {
        printf("empate");
    }

    if((A == 4 ) && (B == 4)) {
        printf("empate");
    }
 return 0;   
    
}
/*Faca um programa em C que receba sımbolos de dois jogadores e
determine quem venceu a brincadeira. Considere que cada sımbolo
seja enumerado da seguinte forma:
• Pedra vale 0;
• Papel vale 1;
• Tesoura vale 2;
• Lagarto vale 3 e;
• Spock vale 4.
*/