#include <stdio.h>

struct tipoData{
    int dia;
    int mes;
    int ano;
};

struct tipoPessoa{
    char nome[80];
    struct tipoData data;
};

struct tipoPessoa separaInfo ( char nome [80] , int dt_nascimento ){

    struct tipoPessoa pessoa;
    int i;
    for(i=0; nome[i] != '\0'; i++){
        pessoa.nome[i] = nome[i];
    }

    pessoa.nome[i] = '\0';

    pessoa.data.ano = dt_nascimento / 10000;
    pessoa.data.mes = (dt_nascimento  % 10000)/100;
    pessoa.data.dia = dt_nascimento % 100;

    return pessoa;
}
/*
int main()
{
    char nome[80];
    int dt_nascimento;

    fgets(nome, 80, stdin);
    scanf("%d", &dt_nascimento);

    struct tipoPessoa res = separaInfo(nome, dt_nascimento);

    printf("\nNome: %s", res.nome);
    printf("Data de Nascimento: %02d/%02d/%d\n", res.data.dia, res.data.mes, res.data.ano);

    return 0;
}
*/
