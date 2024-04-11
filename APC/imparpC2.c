#include <stdio.h>
int main(){
    
    int g1, g2;
    char vencedor;
    int s1, s2, s3;
    int escolha1, escolha2, escolha3;
    int nf1, nf2;
    int na, nb, nc, nd;

    scanf("%d %d %d" , &escolha1, &escolha2, &escolha3);
    scanf("%d %d %d %d" , &na, &nb, &nc, &nd);
    scanf("%d %d" , &nf1, &nf2);

    s1 = na + nb;
    if((s1 % 2 == 0 && escolha1 == 0) || (s1 % 2 == 1 && escolha1 == 1)){
        g1 = 'a';}
    else {g1 = 'b';}

    s2 = nc + nd;
    if((s2 % 2 == 0 && escolha2 == 0) || (s2 % 2 == 1 && escolha2 == 1)){
        g2 = 'c';}
    else {g2 = 'd';}

    s3 = nf1 + nf2;
    if((s3 % 2 == 0 && escolha3 == 0) || (s3 % 2 == 1 && escolha3 == 1)){
        vencedor = g1;}
    else {vencedor = g2;}

    printf( "%c\n" , vencedor);
return 0;
} 
