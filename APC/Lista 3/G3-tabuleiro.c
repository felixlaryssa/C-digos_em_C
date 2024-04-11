#include <stdio.h>
int main (){
    int nL;
    int nM;
    int i;
    int x;

scanf("%d %d", &nL, & nM);

for (i=0; i<nL; i++){

    for (x=0; x<nM; x++){
            printf("[%03d,%03d]", i,x);
    }
    printf("\n");
}
return 0;
}