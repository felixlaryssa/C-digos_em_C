#include <stdio.h>
int main() 
{
    int x;
    int dia = 1;

   
    while ( scanf("%d", &x) != EOF ) {
        int mr, mn;

      
        scanf("%d %d", &mr, &mn);

        
        for ( int i = 0; i < x - 1; i++ ) {
            int restaurante, nota;
            scanf("%d %d", &restaurante, &nota);

            if ( nota > mn ) {
                mn = nota;
                mr = restaurante;
            }
            
            else if ( nota == mn && restaurante < mr ) {
                mr = restaurante;
            }
        }

        printf("Dia %d\n", dia);
        printf("%d\n", mr);

        dia++;
    }

    return 0;
}

/*Entrada: composta por diversas linhas, cada linha representa um dia de viagem. Cada linha começa com um número
inteiro R (1 ≤ R ≤ 200) indicando quantos restaurantes existem na cidade naquele dia de viagem, depois são apresentados
2 ∗ R números Ri que são divididos em pares, Ripar
, com i sendo o i-ézimo elemento da sequência com i par, indicando
o código do restaurante e Riímpar
, sendo i-ézimo elemento da sequência com i ímpar, indicando a nota do restaurante.
Sabemos que 0 ≤ Ripar ≤ 107
e 0 ≤ Riímpar ≤ 5, também dois restaurantes diferentes nunca possuem o mesmo código
identificador para o mesmo dia de viagem.
A entrada termina em EOF

Saída:ara cada dia de viagem, o seu programa, deve imprimir três linhas. A primeira linha deve conter a frase Dia n, com n
sendo o dia da viagem começando por 1, na segunda linha o código do restaurante com a maior nota, quando houver
empate imprima o menor código e por fim a terceira linha deve ser deixada em branco.*/