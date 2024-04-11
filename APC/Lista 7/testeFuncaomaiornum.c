#include <stdio.h>

float maior_numero(float num1, float num2){

    if(num1>num2){
        return num1;
    }
        else{return num2; }
}

int main(){

    float num1;
    float num2;

    scanf("%f", &num1);
    scanf("%f", &num2);

    float x=maior_numero(num1, num2);
    printf("%.2f\n", x);

    return 0;
}

//funcao recebe dois numeros e diz qual o maior entre eles
//teste funcionando