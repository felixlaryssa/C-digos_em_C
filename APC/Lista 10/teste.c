#include <stdio.h>

int main() {
    int juizes;
    float notaAbigail, notaBonifacio, notaClodoaldo;
    float totalAbigail = 0, totalBonifacio = 0, totalClodoaldo = 0;

    printf("Digite a quantidade de juízes: ");
    scanf("%d", &juizes);

    printf("Digite a nota da piada de Abigail: ");
    scanf("%f", &notaAbigail);

    printf("Digite a nota da piada de Bonifacio: ");
    scanf("%f", &notaBonifacio);

    printf("Digite a nota da piada de Clodoaldo: ");
    scanf("%f", &notaClodoaldo);

    totalAbigail += notaAbigail;
    totalBonifacio += notaBonifacio;
    totalClodoaldo += notaClodoaldo;

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
    } else if (totalBonifacio > totalAbigail && totalBonifacio > totalClodoaldo) {
        printf("O vencedor é Bonifacio!\n");
    } else if (totalClodoaldo > totalAbigail && totalClodoaldo > totalBonifacio) {
        printf("O vencedor é Clodoaldo!\n");
    } else {
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
}#include <stdio.h>

int main() {
    int juizes;
    float notaAbigail, notaBonifacio, notaClodoaldo;
    float totalAbigail = 0, totalBonifacio = 0, totalClodoaldo = 0;

    printf("Digite a quantidade de juízes: ");
    scanf("%d", &juizes);

    printf("Digite a nota da piada de Abigail: ");
    scanf("%f", &notaAbigail);

    printf("Digite a nota da piada de Bonifacio: ");
    scanf("%f", &notaBonifacio);

    printf("Digite a nota da piada de Clodoaldo: ");
    scanf("%f", &notaClodoaldo);

    totalAbigail += notaAbigail;
    totalBonifacio += notaBonifacio;
    totalClodoaldo += notaClodoaldo;

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
    } else if (totalBonifacio > totalAbigail && totalBonifacio > totalClodoaldo) {
        printf("O vencedor é Bonifacio!\n");
    } else if (totalClodoaldo > totalAbigail && totalClodoaldo > totalBonifacio) {
        printf("O vencedor é Clodoaldo!\n");
    } else {
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

