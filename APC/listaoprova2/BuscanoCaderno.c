#include <stdio.h>
int main()
{
    int n;
    int m;
    int q;
    int A;
    int B;
    int C;
    char matriz[2][100][80];

    scanf("%d", &n);
    getchar();
    scanf("%d", &m);
    getchar();
    scanf("%d", &q);
    getchar();

    for (int i = 0; i < n; i++)
    {
        fgets(matriz[0][i], 80, stdin);
    }
    for (int j = 0; j < m; j++)
    {
        fgets(matriz[1][j], 80, stdin);
    }
    
    for (int k = 0; k < q; k++)
    {
       scanf("%d", &A);
       getchar();
       scanf("%d", &B);
       getchar();
       scanf("%d", &C);
       getchar();

       for (int l = C; matriz[A-1][B-1][l]!='\0' && matriz[A-1][B-1][l]!='\n'; l++)
       {
        printf("%c", matriz[A-1][B-1][l]);
       }
       printf("\n");   
       
    }

        return 0;
    
    
}