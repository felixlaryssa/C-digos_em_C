#include <stdio.h>

int validaPeso ( double pesoKg ){//peso tem q ser maior que 0
    if( pesoKg >= 0 ){
        return 1; //se retornar 1 significa q é maior q zero
    } 
        else { return 0; } //se for menor retorna 0
}

void fazTonelada ( double pesoKg ){ 
    if( validaPeso (pesoKg) == 1){ //se tiver retornado 1, a lógica pode ser aplicada
        double Tonelada = pesoKg/1000; //peso que vem em kg é dividido por 1000 para virar tonelada 
        printf("%.4f\n", Tonelada);//.4f para ter 4 casas apos a virgula
    }
}

void fazGrama ( double pesoKg ){
    if( validaPeso (pesoKg) == 1){ //se tiver retornado 1, a lógica pode ser aplicada
        double Grama = pesoKg * 1000; //peso que vem em kg é multiplicado por 1000 para virar grama
        printf("%.4f\n", Grama);
    }

}


// int main (){

// double pesoKg;
// scanf("%lf", &pesoKg);


// printf("Peso em Grama:\n");
// fazGrama(pesoKg);

// printf("Peso em Tonelada:\n");
// fazTonelada(pesoKg);

// return 0;
// }
