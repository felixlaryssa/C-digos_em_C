#include <stdio.h>

    struct tipoLogradouro
{
    char tipo[80]; 
    char nome[80]; 
    char complemento[80];
};
    void criaLinhaCSV ( struct tipoLogradouro info, char linha[240]) // rua ; afonso ; loja b
{
    int aux = 0;
    int i=0;
    for (i = 0; info.tipo[i] != '\0'; i++)
    {
        linha[aux] = info.tipo[i];
        aux++;
    }
    linha[aux] = ';';
    aux++;
    for (i = 0; info.nome[i] != '\0' ; i++)
    {
        linha[aux] = info.nome[i];
        aux++;
    }
    linha[aux] = ';';
    aux++;
    for (i = 0; info.complemento[i] != '\0'; i++)
    {
        linha[aux] = info.complemento[i];
        aux++;
    }
    linha[aux] ='\0';
}
//Caio 