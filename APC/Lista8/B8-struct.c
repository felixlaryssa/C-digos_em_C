#include <stdio.h>

struct tipoFiliacao{ //declaracao das variaveis
    char nome[80];
    char nomeMae[80];
    char nomePai[80];
};

struct tipoFiliacao separaLinhaCSV ( char linha [240] ){ //funcao 

struct tipoFiliacao familia; //renomeacao da struct para usa-la ao longo da funçao

int cont1=0;
    for(int i=0; linha[i]!= ','; i++){ //laço para pegar nome do filho ate chegar na virgula
        familia.nome[i]=linha[i];
        cont1 ++; //localizar a virgula para saber a posiçao q parou
    }
    familia.nome[cont1]='\0';// troca a ultima posiçao por \0 para indicar q ja leu toda aquela string

int cont2 = 0;
    for (int j =cont1+1; linha[j]!= ','; j++){ //cont1+1 pois para na virgula e tem q ir para a proxima posiçao 
        familia.nomeMae[cont2]=linha[j];
        cont2 ++;
        cont1 ++;
    }
    familia.nomeMae[cont2]='\0';

int cont3 = 0;
    for(int x= /*(cont2+1)*/ cont1+2; linha[x]!= '\0'; x++){ //soma o contador 
        familia.nomePai[cont3]=linha[x];
        cont3 ++;
    }
    familia.nomePai[cont3]='\0';
    return familia;
}

int main()
{
    char linha[240];
    fgets(linha, 240, stdin);
    struct tipoFiliacao res = separaLinhaCSV(linha);

    printf("%s\n", res.nome);
    printf("%s\n", res.nomeMae);
    printf("%s\n", res.nomePai);
}

