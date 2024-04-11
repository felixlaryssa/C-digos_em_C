#include <stdio.h>
#include <math.h>

int main() {
    unsigned long long int ta, gm, raiz, r;
    scanf("%llu %llu", &ta, &gm);
    ta = sqrt(ta);

for (int i = 0; i < gm; i++){
    if (ta % 2 ==0){
        raiz = (ta / 2) + (ta / 2) - 1;
        r = raiz * raiz;
        
    }

    else {
        raiz = (ta + ta) - 1;
        r = raiz * raiz;
        }
    printf("%llu\n", r);
    ta = raiz;
}
    return 0;
}