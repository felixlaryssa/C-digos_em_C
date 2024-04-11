#include <stdio.h>

void swap ( int *a , int *b ){

    int x = *a;
    *a = *b;
    *b = x;
}

int main()
{
    int aa, bb;
    scanf("%d %d", &aa, &bb);
    int *a, *b;
    a = &aa;
    b = &bb;

    // printf("endereço de ponteiro de a: %p endereço de ponteiro de b:%p\n", a, b);
    // printf("\nindicador de valor de 'a' antes do ponteiro: %d indicador de valor de 'b' antes do ponteiro: %d\n", *a,*b);
    swap(a,b);

}
//para dizer o endereço, usa %p e não usa *
//para apontar para um valor usa *
//indica somente na função criada que é um ponteiro, fora da int main.
//toda vez que um ponteiro for apontar para alguem, faça o uso de &variavel.

//faça uma função que recebe dois números por referência a e b, troque os valores destas variáveis.