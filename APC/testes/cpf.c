#include <stdio.h>

int main() {
   
    unsigned long long int cpf;
    
    scanf("%llu", &cpf);

    int digito; 
    int soma = 0; 
    int peso = 10;

    for (int i = 0; i < 9; i++) {
        digito = cpf % 10;
        cpf /= 10;
        soma += digito * peso;
        peso--;
    }

    int resto = soma % 11;
    int primeiroDigito = (resto < 2) ? 0 : 11 - resto;

    soma = 0;
    peso = 11;
    cpf = cpf / 10;

    for (int i = 0; i < 9; i++) {
        digito = cpf % 10;
        cpf /= 10;
        soma += digito * peso;
        peso--;
    }

    soma += primeiroDigito * peso;
    resto = soma % 11;
    int segundoDigito = (resto < 2) ? 0 : 11 - resto;

    return (cpf % 10 == segundoDigito);


    if (validarCPF(cpf)) {
        printf("CPF válido!\n");
    } else {
        printf("CPF inválido!\n");
    }

    return 0;
}


