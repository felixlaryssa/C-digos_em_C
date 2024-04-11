#include <stdio.h>

int faz_conta_direito(int parcelas, char op){

int num;
scanf("%d", &num);
int resultado;
int soma = num;
int menos = num;

    for(int i=1; i<parcelas; i++){

        scanf("%d", &num);
        if( op == '+'){
            soma+=num;
        
            resultado = soma;
        }
        else if( op == '-'){
            menos-=num;

            resultado = menos;
        }
    }
    return resultado;
}

int main(){

    int parcelas;
    char op;
    scanf("%d %c", &parcelas, &op);

    int resultado = faz_conta_direito(parcelas, op);
    printf("%d\n", resultado);

return 0;
}