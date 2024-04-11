#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num); //8358

    int digitos[4];
    digitos[0] = num % 10;   // Obtém o último dígito                     //835,(8)
    digitos[1] = (num / 10) % 10;   // Obtém o segundo dígito             //(83(5)),8
    digitos[2] = (num / 100) % 10;   // Obtém o terceiro dígito           //(8(3)),58
    digitos[3] = (num / 1000) % 10;   // Obtém o primeiro dígito          //((8)),358
    //printf("dig1: %d dig2: %d dig3: %d dig4: %d\n", digitos[0], digitos[1], digitos[2], digitos[3]);
    //atualizar digitos
    digitos[0] *= 2; //8*2=16
    digitos[1] *= 1;
    digitos[2] *= 2;
    digitos[3] *= 1;

    digitos[0]= (digitos[0]/10)+(digitos[0]%10); //divisao: 16/10= (1),6       //resto: 16/10= 1,(6)
    digitos[2]= (digitos[2]/10)+(digitos[2]%10);

    //calcula o somatorio.
    int soma=0;
    for (int i = 0; i < 4; i++)
    {
        soma+=digitos[i];
    }
    //se o resto do somatorio dividid por 10 for 0, o verificador é 0, se não é o resto do somatorio subtraído por 10 
    int digito_verificador;
    if (soma%10==0)
    {
        digito_verificador=0;
        printf("%d",digito_verificador); 
    }
    else
    {
        digito_verificador= 10-(soma%10);
        printf("%d",digito_verificador);
    }
    return 0;
}
