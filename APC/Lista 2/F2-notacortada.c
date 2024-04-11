#include <stdio.h>

int main (){
    int b, a;
    scanf("%d %d" , &a, &b);

    if(a+b == 160){
        printf("0");
    }
    else if(a+b > 160){printf("1");}
    else if(a+b < 160){printf("2");}

    return 0;
}
//nota cortada