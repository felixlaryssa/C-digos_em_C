#include <stdio.h>
int main (){
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

    int y = 0;
    for(int i=0; i<n; i++){
        if(vet1 == vet2){
        y=1;
        }
    }

    if(y == 1){
       printf("sim"); 
    }
        else{
            printf("nao");
            }
    
    return 0;
}