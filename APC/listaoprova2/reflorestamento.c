#include <stdio.h>
int main(){

int n;
scanf("%d", &n);

int mat[n][n];
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        scanf("%d", &mat[i][j]);
    }
}


int x=0;
int coluna=-1;
int maior=0;

for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        if(mat[j][i] == 1){
            x++;
        }
    }
        if(x > maior){
            maior = x;
            coluna = i;
        }
    x=0;
}

if(coluna == -1){
    printf("0");
}
    else{printf("%d", coluna+1);}

return 0;
}