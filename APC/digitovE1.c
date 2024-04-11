#include <stdio.h>

int main()
{
    int a1, b2, c3, d4, e5, f6;
    int CC;
    int resto;
    int dv;

scanf("%d" , &CC);

    a1 = (CC % 10);
    b2 = (CC % 100) /10;
    c3 = (CC % 1000) /100;
    d4 = (CC % 10000) /1000; 
    e5 = (CC % 100000) /10000;
    f6 = (CC % 1000000) /100000;
    resto = (a1 * 2 + b2 * 3 + c3 * 4 + d4 * 5 + e5 * 6 + f6 * 7) % 11;
    dv=(11-resto);

printf("%d\n" , dv);
}
