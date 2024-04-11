#include <stdio.h>
int main(){
    
    int n;
    scanf("%d", &n);
    
    int amigos;
    scanf("%d", &amigos);
    
    int matriz[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int contador=0;
    int coluna;
    int imp=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            
           if([j][i]==0){
             contador++;
           }
           if(contador>=amigos){
               coluna=j; 
               imp=1;
           }
        
    }
        contador=0;
    }
    
    if(imp==1){
        printf("%d", coluna);
    } else {
        printf("N");
    }

}