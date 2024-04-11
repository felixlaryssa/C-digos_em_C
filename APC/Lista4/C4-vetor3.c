#include <stdio.h>
int main (){
   int n;
   scanf("%d", &n);

   int vet [n];
   for (int i=0; i<n; i++){
      scanf("%d", &vet[i]);
   }

   int par[n];
   int impar[n];

   for (int i=0; i<n; i++){
      if (vet[i] % 2 == 0){ // se o resto da divisão de vet[i] por 2 for 0, par[i] vai receber aquele valor e printá-lo
          par[i] = vet[i];
          printf("%d ", par[i]);
      }
   }

   printf("\n");//próxima linha

   for (int i=0; i<n; i++){ // se o resto da divisão de vet[i] por 2 for != 0, impar[i] vai receber aquele valor e printá-lo
      if (vet[i] % 2 != 0){
            impar[i] = vet[i];
            printf("%d ", impar[i]);
         }
   }

return 0;
}
//separa os números pares dos ímpares.
