#include <stdio.h>
int main()
{
    int valor;
    scanf("%d", &valor);

    int dinheiro;
    scanf("%d", &dinheiro);

    int m500=0, m100=0, m50=0, m10=0, m5=0, m1=0;

    if(valor==dinheiro){
        m500=0, m100=0, m50=0, m10=0, m5=0, m1=0;
        printf("%d\n%d\n%d\n%d\n%d\n%d\n", m500, m100, m50, m10, m5, m1);
    } 

    int resultado=dinheiro-valor;
    
    if(resultado >= 500){
        m500 = resultado / 500;
    }

    if(resultado >= 100 && resultado % 500 != 0){
        m100 = resultado / 100;
    }

    if(resultado >= 50 && resultado % 100 != 0 ){
        m50 = resultado / 50;
    }

    if(resultado >= 10 && resultado % 50 != 0){
        m10 = resultado / 10;
    }

    if(resultado >= 5 && resultado % 10 != 0){
        m5 = resultado / 5;
    }

    if(resultado >= 1 && resultado % 10 != 0){
        m1 = resultado / 1;
    }

    printf("%d\n%d\n%d\n%d\n%d\n%d\n", m500, m100, m50, m10, m5, m1);


}