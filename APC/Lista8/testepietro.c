#include <stdio.h>
#include <stdlib.h> // funções envolvendo alocação de memória, controle de processos, conversões...
#include <string.h> //biblioteca q aceita dados do tipo texto
#include <locale.h> //biblioteca q permite pontuação gráfica

#define TAM 3 // constante de tamanho 3

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa; //renomeeia struct

int main(){
     setlocale (LC_ALL, "Portuguese");

     tipo_pessoa lista[TAM]; //lista q é um vetor de 3 posições, para cada posição do vetor lista eu tenho os 3 campos

    for(int i =0; i<TAM; i++){
        printf("insira os dados (%d):\n", i+1); //insira os dados q (%d) representam a pessoa 1 dps 2 e por último 3
        puts("Nome: ");
        scanf("%50[^\n]s", &lista[i].nome); //posição na lista . e o campo q estou querendo manipular
        fflush(stdin);//limpar e não bugar o teclado

        puts("Idade: ");
        scanf("%d", &lista[i].idade); //posição na lista . e o campo q estou querendo manipular
        fflush(stdin);

        puts("Peso: ");
        scanf("%f", &lista[i].peso); //posição na lista . e o campo q estou querendo manipular
        fflush(stdin);
    }
    system("cls"); //limpa o terminal windows para não ficar muito poluido

    puts("Seus dados: \n"); //sem poluição visual irá imprimir os dadaos q o usuário inseriu
    for(int i=0; i<TAM; i++){
        printf("----- Pessoa () -----");
        printf("\n");
        printf("\tNome: %s\n", lista[i].nome);
        printf("\tIdade: %d\n", lista[i].idade);
        printf("\tPeso: %f\n", lista[i].peso);
    }
    printf("-----------------------------\n");
}