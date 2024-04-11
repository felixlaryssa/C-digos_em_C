#include <stdio.h>

int main()
{
    int numero; //num da agencia com 4 digitos 
    scanf("%d ", &numero);

    int digito[4]; //8

    //os calculos vão da direita p esquerda por isso começo pegando o ultimo digito
    digito[0] = numero % 10; //obtem o ultimo digito
    digito[1] = (numero % 100)/10; //segundo digito
    digito[2] = (numero % 1000)/100; //terceiro digito
    digito[3] = (numero % 10000)/1000; //quarto digito

    //começando os calculos para decidir o digito verificador

    //1 passo- multiplicar os digitos por 2,1,2,1 nessa ordem
    digito[0] *=2; //digito[0]: 8*2= 16
    digito[1] *=1; 
    digito[2] *=2; 
    digito[3] *=1;

    //2 passo- somar os digitos resultantes da multiplicaçao anterior//so fazer isso com as posições 0 e 2 q sao multiplicados por 2
    digito[0]  = (digito[0]/10) + (digito[0]%10); //divisao: 16/10 = (1),6 como é int armazena so o 1 digito + Resto: pega o ultimo digito, entao fica: 1+6=7
    digito[2]  = (digito[2]/10) + (digito[2]%10);

    //3passo-Se o resto da divisao do somatorio por 10 for 0, entao o dıgito verificador sera 0. Caso
    //contrario, o dıgito verificador sera a subtracao de 10 pelo resto da divisao (por exemplo, caso
    //o resto da divisao seja 8, o DV sera 10 − 8 = 2).

    int soma=0;
    for(int i=0; i<4; i++)
    {
        soma+=digito[i];    //somando os digitos
    }

    int digitoverificador;
    if(soma%10==0)
    {
        digitoverificador=0;
        printf("%d", digitoverificador);
    }

    else
    {
        digitoverificador = 10-(soma%10);
        printf("%d", digitoverificador);
    }
}

