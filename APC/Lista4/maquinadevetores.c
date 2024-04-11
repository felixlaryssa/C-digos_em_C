#include <stdio.h>
    int main()
    {
        int n;
        scanf("%d", &n);

        int vet1[n];
        for(int i=0; i<n; i++){
            scanf("%d", &vet1[i]);
        } 

        int vet2[n];
        for(int i=0; i<n; i++){
            scanf("%d", &vet2[i]);
        } 

        int vet3[n];
        for(int i=0; i<n; i++){
            scanf("%d", &vet3[i]);
        } 

         // 0 soma, 1 subtração, 2 multiplicação, 3 divisão
        for(int i=0; i<n; i++){
            if(vet3[i]==0){
                printf("%d ", vet1[i]+vet2[i]); 
            }  
                                                         
            if(vet3[i] ==1){
                printf("%d ",vet1[i]-vet2[i]);
            }

            if(vet3[i] ==2){
                printf("%d ", vet1[i]*vet2[i]);
            } 

           if(vet3[i] ==3){
                printf("%d ", vet1[i]/vet2[i]);
            }  
        }
    return 0;
    }
    //lê 2 vetores e o terceiro vetor diz qual operação deve ser feita, quando for 0 soma, 1 subtração, 2 multiplicação, 3 divisão