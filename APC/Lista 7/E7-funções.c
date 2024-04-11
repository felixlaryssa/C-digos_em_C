#include <stdio.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia)
{
    double Vmedia;
    double tempo = (tB-tA)/3600.0;
    Vmedia = distancia/ tempo;
    return Vmedia;
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima)
{
    if (calculaVelocidadeMedia(tA, tB, distancia) > velocidadeMaxima)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/*int main (){

    int  tA, tB;
    scanf("%d %d", &tA, &tB);

    double distancia;
    scanf("%lf", &distancia);

    double velocidadeMaxima;
    scanf("%lf", &velocidadeMaxima);

    int x;
    x = levouMulta(tA, tB, distancia, velocidadeMaxima);

    if ( x == 1 ){
        printf("levoumulta");
    }
        else { printf("naolevoumulta");}

    return 0;
}*/