#include <stdio.h>
#include <stdlib.h>

int main(){
	int cpf1[9] = {} ,cpf2 [10] = {},numero, produto1, produto2, resto1, resto2, digito10,digito11,i;
	int multiplicadores1 [9] = {10,9,8,7,6,5,4,3,2}, multiplicadores2 [10] = {11,10,9,8,7,6,5,4,3,2};
	char valido, invalido;
	produto1 = 0;
	produto2 = 0;	
	scanf("%d", &numero);
	int j = 9;
	while(numero > 0){
		cpf1[j] = numero % 10;
		numero = numero/10;
		j--;
	}
	for(i=0;i<10;i++){
		produto1 = (cpf1[i] * multiplicadores1[i]) + produto1;
	}
	resto1 = produto1 % 11;
	digito10 = 11 - resto1;
	if (digito10 >= 10){digito10 == 0;
	digito10 = valido;}
	else {digito10 = invalido;}
	
		int k = 10;
	while(numero > 0){
		cpf2[j] = numero % 10;
		numero = numero/10;
		k--;
	}
	for(i=0;i<11;i++){
		produto2 = (cpf2[i] * multiplicadores2[i]) + produto2;
	}
	resto2 = produto2 % 11;
	digito11 = 11 - resto2;
	if (digito11 >= 10){digito11 == 0;
	digito11 = valido;}
	else {digito11 = invalido;}
	
	if ((digito10 == valido) && (digito11 == valido)) {
		printf("valido");
	}else ((digito10 == invalido) || (digito11 == invalido));{
		printf("invalido");
	}
	
	system("pause");
}

