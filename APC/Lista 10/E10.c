 #include <stdio.h>

int qtdElementosUnicos (int v [10000] , int qtd){

int contador = 1; //tem q começar em 1 para já armazenar o número q estou comparando
for(int i=0; i < qtd-1 ; i++){ 
    if(v[i] != v[i+1]){ // se o vetor na posição i for != do próximo vetor o contador q já tem 1 unidade conta mais 1
    contador ++;
    }
}
//1 2 3 4
return contador;
}

// int main(){

//     int qtd;
//     scanf("%d", &qtd);

//     int v[qtd]; // vetor de tamanho qtd
//     for(int i = 0; i<qtd; i++){ //laço para armazenar algarismos do vetor
//         scanf("%d", &v[i]);
//     }

//     int x = qtdElementosUnicos (v, qtd); // variavel q recebe a função q fiz
//     printf("%d", x); 

// return 0;
// }