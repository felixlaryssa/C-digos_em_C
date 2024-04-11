#include <stdio.h>
#include <string.h>
int main()
{
    int matriz[26][26];
    int n, m;
    int linha, coluna;
    char ondetemouro[4];
    char ondeprocurououro[4];

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            matriz[i][j] = 0;
        }
        
    }
    

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", ondetemouro);
        if (strlen(ondetemouro)>2)
        {
            int caractere = ondetemouro[0];
            linha = caractere - 'A';
            int numero = ondetemouro[1] - '0';
            int numero2 = ondetemouro[2] - '0';
            coluna = (numero * 10) + numero2;
            matriz[linha][coluna] = 1;
        }
        else
        {
            int caractere = ondetemouro[0];
            linha = caractere - 'A';
            int numero = ondetemouro[1];
            coluna = numero - '0';
            matriz[linha][coluna] = 1;    
        }
        
    }

    scanf("%d", &m);
    for (int k = 0; k < m; k++)
    {
        scanf("%s", ondeprocurououro);
        if (strlen(ondeprocurououro)>2)
        {
            int caractere = ondeprocurououro[0];
            linha = caractere - 'A';
            int numero = ondeprocurououro[1] - '0';
            int numero2 = ondeprocurououro[2] - '0';
            coluna = (numero*10) + numero2;

            if (matriz[linha][coluna]==1)
            {
                printf("ouro %s\n", ondeprocurououro);
            }
            else
            {
                printf("vazio %s\n", ondeprocurououro);
            }
            
        }
        else
        {
            int caractere = ondeprocurououro[0];
            linha = caractere - 'A';
            int numero = ondeprocurououro[1];
            coluna = numero - '0';

            if (matriz[linha][coluna]==1)
            {
                printf("ouro %s\n", ondeprocurououro);
            }
            else
            {
                printf("vazio %s\n", ondeprocurououro);
            }
        }
        
    }

    return 0;
    

}