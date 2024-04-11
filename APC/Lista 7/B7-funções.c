#include <stdio.h>
int faz_conta_direito(int parcelas, char op)
{
    int resultado, num;
     
      scanf("%d", &num);
    int soma = num;
    int menos = num;
    for(int i=1; i<parcelas;i++){

        scanf("%d", &num);
        

        if (op == '+') { //se o operador for soma 
            soma += num;//
            resultado=soma;
        }
        else if(op == '-')
        {
            menos -= num;
            resultado=menos;
          
        }
    }
    return resultado;
}

/*
int main()
{
    int parcelas;
    char op;
    scanf("%d %c", &parcelas, &op);
    int x;
    x=faz_conta_direito(parcelas,op);

    printf("%d", x);
}
*/

//O primeiro parâmetro da função representa a quantidade de parcelas pi que devem ser lidas da entrada padrão e o segundo
//parâmetro representa a operação que deverá ser realizada.

