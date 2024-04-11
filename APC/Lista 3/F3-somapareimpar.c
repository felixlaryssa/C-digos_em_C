#include <stdio.h>

int main() {
    int n;
    int somapares = 0;
    int somaimpares = 0;
    
    do {
        scanf("%d", &n);
        
        if (n % 2 == 0) {
            somapares += n;
        } else {
            somaimpares += n;
        }
    } while (n != 0);
    
    printf("%d %d", somapares, somaimpares);
   
    
    return 0;
}
/*Entrada: composta por diversos números inteiros N e termina quando o número lido for 0
Saída: composta por uma única linha contendo a soma de todos os números pares e ímpares da sequência de números.
*/