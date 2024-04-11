#include <stdio.h>
int main (){
   int n;
   scanf("%d", &n);

   int vet [n];
   for (int i=0; i<n; i++){
      scanf("%d", &vet[i]);
   }

   int par=0;
   int impar=0;

   for (int i=0; i<n; i++){
      if (vet[i] % 2 == 0){ // se o resto da divisão de vet[i] por 2 for 0, par vai receber o índice daquele vetor e printá-lo
          par = i;
          printf("%d ", par);
      }
   }

   printf("\n"); //próxima linha

   for (int i=0; i<n; i++){
      if (vet[i] % 2 != 0){ // se o resto da divisão de vet[i] por 2 for!= 0, impar vai receber o índice daquele valor e printá-lo
            impar = i;
            printf("%d ", impar);
         }
   }

return 0;
}
//separa os indices dos elementos pares dos impares. 
