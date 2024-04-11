#include <stdio.h>

int main()
{
    char frase[10000];
    char antiga[41];
    char nova[41];

    fgets(frase, sizeof(frase), stdin);
    fgets(antiga, sizeof(antiga), stdin);
    fgets(nova, sizeof(nova), stdin);

    int i = 0;
    while (frase[i] != '\n' && frase[i] != '\0')
    {
        i++;
    }
    frase[i] = '\0';

    i = 0;
    while (antiga[i] != '\n' && antiga[i] != '\0')
    {
        i++;
    }
    antiga[i] = '\0';

    i = 0;
    while (nova[i] != '\n' && nova[i] != '\0')
    {
        i++;
    }
    nova[i] = '\0';

    int len_frase = 0;
    int len_antiga = 0;
    int len_nova = 0;

    while (frase[len_frase] != '\0')
    {
        len_frase++;
    }

    while (antiga[len_antiga] != '\0')
    {
        len_antiga++;
    }

    while (nova[len_nova] != '\0')
    {
        len_nova++;
    }

    int verificador = 0;
    for (i = 0; i <= len_frase - len_antiga; i++)
    {
        verificador = 1;

        for (int j = 0; j < len_antiga; j++)
        {
            if (frase[i + j] != antiga[j])
            {
                verificador = 0;
                break;
            }
        }

        if (verificador)
        {
    
            for (int j = 0; j < len_nova; j++)
            {
                frase[i + j] = nova[j];
            }
        }
    }
    printf("%s\n", frase);

    return 0;
}
