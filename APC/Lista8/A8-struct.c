#include <stdio.h>
#include <math.h>

struct tipoPonto{
    int x;
    int y;
};

double distancia ( struct tipoPonto pa , struct tipoPonto pb ){

    double dist;
    dist = sqrt(pow ((pb.x - pa.x),2) + pow((pb.y - pa.y), 2));// sqrt raiz, pow potencia

    return dist;
}


// int main(){

//     struct tipoPonto pa, pb;
//     scanf("%d %d %d %d", &pa.x, &pb.x, &pa.y, &pb.y);
//     double D = distancia (pa , pb);
    

//     printf("%lf", D);
// }

//função chamada distancia, que recebe duas estruturas do tipo tipoPonto, que possuem
//coordenadas x e y, e retorne a distância entre esses pontos. Lembre-se que para calcular a distância
//é uma medida que liga um ponto A a outro ponto B, utilizando o Teorema de Pitágoras 