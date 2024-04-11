#include <stdio.h>

int main()
{


int n;//linhas

scanf("%d" , &n); //leitura

int m;//colunas

scanf("%d" , &m);

int matriz[n][m]; // declarando minha matriz

for(int l = 0; l < n; l++) //percorrendo minhas linhas
{
    for(int c = 0; c < m; c++)//percorrendo as colunas
    {
        scanf("%d" , &matriz[l][c]); //fazendo a leitura da minhas matriz
    }
}

int maiorlinha = 0; //variavel pra armazenar o valor somado da linha
int l; 
int c;

int maior = 0; //variavel para fazer a comparação do maior numero 

for(c = 0; c < n; c++) //
{
    int somal = 0;

    for(l = 0; l < m; l++)
    {
        somal += matriz[l][c]; //somal = somal+matriz[l][c]
        maiorlinha = somal; //a variavel maior_linha recebe o valor da somal;
        if(maiorlinha > maior)
        {
            maior = maiorlinha;
        }
    }
}

int maiorcoluna = 0;
int maior2 = 0;

for(int l = 0; l < m; l++) //soma linha
{
    int somac = 0;

    for(c = 0; c < n; c++)
    {
        somac += matriz[l][c]; //somal = somal+matriz[l][c]
        maiorcoluna = somac; //a variavel maior_linha recebe o valor da somal;

        if(maiorcoluna > maior2)
        {
            maior2 = maiorcoluna;
        }
    }

}

if(maior > maior2)
{

    printf("%d\n" , maior);

}
else {printf("%d\n" , maior2);}

}

//receba o tamanho da matriz, receba a matriz e imprima a linha ou coluna com a maior soma