#include <stdio.h>

    int main(){

        int N, M;
        scanf("%d %d", &N, &M);


        char S[N][80];
        char P[M][80];


        for(int i=0; i<N; i++){
            scanf("%s", S[i]);
        }
        
        for(int i=0; i<M; i++){
              scanf("%s", P[i]);
        } 

        int c;
        int x=0;
        int y=0;
        for(int l=0; l<N; l++){
            for(int l2=0; l2<M; l2++){
                x=0;
                for(c=0; S[l][c]!= '\0' && P[l2][c]!= '\0'; c++){
                    if(S[l][c] != P[l2][c]){
                        x++;
                    }
                }
                if(S[l][c]!= '\0'|| P[l2][c]!='\0'){
                    x++;
                }
                if(x==0){
                    y=1;
                }   
            }
        }


        if(y==1){
            printf("1\n");
        }   
        else{
            printf("0\n");
        }

    return 0;
}