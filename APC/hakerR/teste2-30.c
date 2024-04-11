#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b){

int mais = *a + *b;
int menos = abs(*a - *b);

*a = mais;
*b = menos;
}

int main(){

    int a;
    int b;

    int *pa = &a, *pb = &b;

    scanf("%d", &a);
    scanf("%d", &b);

    update(pa, pb);
    printf("%d\n%d", a, b);

return 0;
}



