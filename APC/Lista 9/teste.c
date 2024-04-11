#include <stdio.h>

int main() {
    int juizes;
    float notas[3][10]; // Matriz para armazenar as notas dos finalistas
    float totalAbigail = 0, totalBonifacio = 0, totalClodoaldo = 0;

    printf("Digite a quantidade de juízes: ");
    scanf("%d", &juizes);

    printf("Digite as notas do primeiro jurado:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &notas[i][0]);
        totalAbigail += notas[i][0];
    }

    printf("Digite as notas do segundo jurado:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &notas[i][1]);
        totalBonifacio += notas[i][1];
    }

    printf("Digite as notas do terceiro jurado:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &notas[i][2]);
        totalClodoaldo += notas[i][2];
    }

    // Cálculo da pontuação total para cada candidato
    totalAbigail /= juizes;
    totalBonifacio /= juizes;
    totalClodoaldo /= juizes;

    printf("Pontuação total:\n");
    printf("Abigail: %.2f\n", totalAbigail);
    printf("Bonifacio: %.2f\n", totalBonifacio);
    printf("Clodoaldo: %.2f\n", totalClodoaldo);

    // Verificação do vencedor
    if (totalAbigail > totalBonifacio && totalAbigail > totalClodoaldo) {
        printf("O vencedor é Abigail!\n");
    } 
        else if (totalBonifacio > totalAbigail && totalBonifacio > totalClodoaldo) {
        printf("O vencedor é Bonifacio!\n");
    } 
        else if (totalClodoaldo > totalAbigail && totalClodoaldo > totalBonifacio) {
        printf("O vencedor é Clodoaldo!\n");
    } 
    
        else {
        printf("Empate entre:");

        if (totalAbigail == totalBonifacio) {
            printf(" Abigail e Bonifacio");
        }

        if (totalAbigail == totalClodoaldo) {
            printf(" Abigail e Clodoaldo");
        }

        if (totalBonifacio == totalClodoaldo) {
            printf(" Bonifacio e Clodoaldo");
        }

        printf("\n");
    }

    return 0;
}
