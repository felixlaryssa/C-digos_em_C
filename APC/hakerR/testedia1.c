#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    if( n == 1){
        printf( "one");
    }

    else if( n == 2){
        printf( "two");
    }

    else if( n == 3){
        printf( "three");
    }

    else if( n == 4){
        printf( "four");
    }

    else if( n == 5){
        printf( "five");
    }

    else if( n == 6){
        printf( "six");
    }

    else if( n == 7){
        printf( "seven");
    }

    else if( n == 8){
        printf( "eight");
    }

    else if( n == 9){
        printf( "nine");
    }

        if( n > 9){
            printf( "Greater than 9");
        }

return 0;
}

/*Se 1 <= n <= 9, imprima a palavra inglesa em minúscula correspondente ao número (por exemplo, one, two, etc); 
caso contrário, imprima Greater than 9.*/

//código funcionou, ma sno terminal do vs não pega o caso teste n > 9.