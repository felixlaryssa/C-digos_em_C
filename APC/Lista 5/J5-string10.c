#include <stdio.h>

int main()
{
    int x, t; 
    char f[1000];
    char fcod[1000]; 
    scanf("%d", &x);
    getchar(); 

    for (int i = 0; i < x; i++)
    {
        fgets(f, 1000, stdin); 

        for ( t=0; f[t]!='\0'; t++)
        {
            if (f[t] >= 'A' && f[t] <= 'Z')
            {
                if (f[t] <= 'M')
                {
                    fcod[t] = f[t] + 13;
                }
                else
                {
                    fcod[t] = f[t] - 13;
                }
            }
            else if (f[t] >= 'a' && f[t] <= 'z')
            {
                if (f[t] <= 'm')
                {
                    fcod[t] = f[t] + 13;
                }
                else
                {
                    fcod[t] = f[t] - 13;
                }
            }
            else
            {
                fcod[t] = f[t];
            }
        }

        fcod[t] = '\0';

        printf("%s\n", fcod);
    }

    return 0;
}
