#include <stdio.h>

int main()
{
    char str[102];
    fgets(str, 102, stdin);
    int i=0;
    //o l a \n
    while (str[i] != '\0')
    {
        i++;
    }
    //printf("%d\n", i-2);
    int contrario[102];
    for (int l = i-2; l>=0; l--)
    {
        printf("%c - %d\n", str[l], str[l]);                   
    }



    
    return 0;
}
//Nesta questão, você precisará criar um programa que leia uma string do teclado e imprima todos os caracteres da string
//invertida. Para cada caracter, deve-se imprimir uma linha contendo o caracter e o decimal da tabela ASCII, separados por
//espaço e hífen.