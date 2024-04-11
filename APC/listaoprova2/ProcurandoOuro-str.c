#include <stdio.h>
#include <string.h>
int main ()
{
    int n;
    scanf("%d", &n);
    char matriz[n][4];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", matriz[i]);
    }
    int m;
    scanf("%d", &m);
    char matriiz[m][4];
    int entrou =0;
    for (int j = 0; j < m; j++)
    {
        scanf("%s", matriiz[j]);
        for (int k = 0; k < n; k++)
        {
            int a = strcmp(matriiz[j], matriz[k]);

            if (a==0)
            {
                entrou = 1;
            }
            
            
        }
        if (entrou>=1)
        {
            printf("ouro %s\n", matriiz[j]);
        }
        else
        {
            printf("vazio %s\n", matriiz[j]);
        }
        
        entrou = 0;
    }
    
    
    
}