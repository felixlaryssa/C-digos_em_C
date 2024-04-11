#include <stdio.h>

int main(){
    int n;
    int x;
    int soma = 0;

    scanf("%d", &n);

for (int i = 0; i < n; i++){
    scanf("%d", &x);
    soma += x;
    }

    printf("%d\n" , soma);
    return 0;  
}

/*Para este exercício você deve ler um conjunto de números da entrada padrão (geralmente o teclado) e imprimir uma única
linha contendo a soma de todos eles.
entrada: A primeira linha contém um inteiro positivo N. As N linhas seguintes contêm cada uma um inteiro X, representando os N números a serem somados.
*/