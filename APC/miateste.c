#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_CNPJ 19
#define TAM_MAX_NOME 100
#define TAM_MAX_CAPACIDADE 1500
#define TAM_INSTALACAO 10
#define TAM_ESTATUS_USINA 12

// Estrutura para armazenar os dados da miniusina
typedef struct {
    char cnpj[TAMANHO_CNPJ];
    char nome[TAM_MAX_NOME];
    char capacidade[TAM_MAX_CAPACIDADE];
    char instalacao[TAM_INSTALACAO];
    char estatus_usina[TAM_ESTATUS_USINA];
} Miniusina;

void consultarMiniusinaCadastrada() {
    FILE* arquivo_miniusina;
    Miniusina cadastro_usina;

    arquivo_miniusina = fopen("C:\Users\Renato\Downloads", "r");

    if (arquivo_miniusina == NULL) {
        printf("Não foi possível abrir o arquivo\n");
        return;
    }

    while (fscanf(arquivo_miniusina, "%[^;];%[^;];%[^;];%[^;];%[^;];%[^\n]\n",
                  cadastro_usina.cnpj,
                  cadastro_usina.nome,
                  cadastro_usina.capacidade,
                  cadastro_usina.instalacao,
                  cadastro_usina.estatus_usina) != EOF) {

        printf("CNPJ: %s\n", cadastro_usina.cnpj);
        printf("NOME: %s\n", cadastro_usina.nome);
        printf("CAPACIDADE: %s\n", cadastro_usina.capacidade);
        printf("INSTALACAO: %s\n", cadastro_usina.instalacao);
        printf("ESTATUS_USINA: %s\n", cadastro_usina.estatus_usina);
        printf("\n");
    }

    fclose(arquivo_miniusina);

}



int main() {
    int opcao;

    do {
        printf("MENU\n");
        printf("1. Consultar miniusina cadastrada\n");
        printf("2. Outra opção\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                consultarMiniusinaCadastrada();
                break;
            case 2:
                // Aqui você pode implementar a lógica para a outra opção
                printf("Opção 2 selecionada\n");
                break;
            case 3:
                printf("Saindo do programa\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }

        printf("\n");
    } while (opcao != 3);

    return 0;
}