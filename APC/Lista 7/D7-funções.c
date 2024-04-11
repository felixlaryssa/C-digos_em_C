#include <stdio.h>

double potencia (int x, int n){
    double pot = 1.0;
        for (int i = 0; i<n; i++){
            pot *= x; 
        }
    
    return pot;
}

long long int fatorial (int n){
    long long int fat = 1.0;
        for (int i=1; i<=n; i++){
            fat *= i;
        }
        
        return fat;
}


double exp_natural ( int x , int n ){
    double resultado;
    for (int i=0; i<=n; i++){
    resultado += potencia (x, i) / fatorial (i);
    }
    return resultado;
}


// int main(){
// int x, n;
            
// scanf("%d %d", &x, &n);
            
// int pot = potencia(x, n);
// long long int fat = fatorial (n);
// double resultado = exp_natural (x , n );

// printf("%lf", resultado);
            
// return 0; 
// }

