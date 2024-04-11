#include <stdio.h>
int main()
{
    unsigned long long int cpf;
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, r1, v1, r2, v2;
    scanf("%llu", &cpf);

    n11 = (cpf % 10);
    n10 = (cpf % 100) / 10;
    n9 = (cpf % 1000) / 100;
    n8 = (cpf % 10000) / 1000;
    n7 = (cpf % 100000) / 10000;
    n6 = (cpf % 1000000) / 100000;
    n5 = (cpf % 10000000) / 1000000;
    n4 = (cpf % 100000000) / 10000000;
    n3 = (cpf % 1000000000) / 100000000;
    n2 = (cpf % 10000000000) / 1000000000;
    n1 = (cpf % 100000000000) / 10000000000;

    r1 = ((n1 * 10 + n2 * 9 + n3 * 8 + n4 * 7 + n5 * 6 + n6 * 5 + n7 * 4 + n8 * 3 + n9 * 2) % 11);
    if (11 - r1 >= 10)
    {
        v1 = 0;
    }
    else
    {
        v1 = (11 - r1);
    }
    r2 = ((n1 * 11 + n2 * 10 + n3 * 9 + n4 * 8 + n5 * 7 + n6 * 6 + n7 * 5 + n8 * 4 + n9 * 3 + n10 * 2) % 11);
    if (11 - r2 >= 10)
    {
        v2 = 0;
    }
    else
    {
        v2 = (11 - r2);
    }
    if ((n10 == v1) && (n11 == v2))
    {
        printf("valido\n");
    }
    else
    {
        printf("invalido\n");
    }
}
/*Escreva um programa em C que recebe os 11 dıgitos do CPF do usuario e exiba se e um CPF valido
ou nao.*/