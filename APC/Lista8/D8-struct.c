#include <stdio.h>
#include <string.h>

struct tipoMusica{
    char nome[80];
    int ano;//ano de lançamento
};

struct tipoBanda{
    char nome[80];//nome das bandas
    int qtd;//quantidade de músicas daquela banda
    struct tipoMusica musicas[100];
};

void pesquisarNomeMusica ( char pesquisa [80] , struct tipoBanda bandas [50] , int n ){

    int x=0;//funciona como verificador, se encontrar a musica deixa de ser 0

    for(int i=0; i<n; i++){//laço para fazer a verificação de acordo com a quantidade de bandas cadastradas

        for(int j=0; j<bandas[i].qtd; j++){//segundo laço para qnd acessar as músicas fazer a contagem de acordo com a qtd de musicas cadastradas 

            if(strcmp(bandas[i].musicas[j].nome, pesquisa)==0){
                printf("%s : ano %d\n", bandas[i].nome, bandas[i].musicas[j].ano);
                x++; //achou a música
            }
        }
    }    

if(x==0){//se não achou, aquela música não foi cadastrada 
    printf("Musica nao cadastrada\n");
    }
}