#include <stdio.h>
#include <stdbool.h> // Biblioteca para usar o tipo bool

// Função para verificar se um número é primo
bool eh_primo(int k) {
    if (k <= 1) {
        return false;
    }
    for (int i = 2; i*i <= k; i++) {
        if (k % i == 0) {
            return false;
        }
    }
    return true;
}

// Função para verificar se um número é um primo arrojado
bool eh_primo_arrojado(int k) {
    while (k > 0 && eh_primo(k)) { // Enquanto o número tiver dígitos e for primo
        k /= 10; // Remove o último dígito
    }
    return k == 0; // Retorna verdadeiro se o número foi completamente apagado
}

int main() {
    int p;
    scanf("%d", &p);

    for (int i = 0; i < p; i++) {
        int k;
        scanf("%d", &k);

        if (eh_primo_arrojado(k)) {
            printf("S\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}

/*Entrada: primeira linha contém o inteiro T, que representa a quantidade de casos de teste.
Cada uma das próximas T linhas contém um número n
Saída: para cada caso de teste, imprima uma linha com S, caso o número n seja um primo arrojado, ou N, caso contrário.*/