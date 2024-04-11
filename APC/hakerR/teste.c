#include <stdio.h>

int main(){

    int n, m;
    scanf("%d %d", &n, &m);

    float x, y;
    scanf("%f %f", &x, &y);

   int soma = n + m;
   int sub = n - m;

   float mais = x + y;
   float menos = x - y;

   printf("%d %d\n", soma, sub);
   printf("%.1f %.1f\n", mais, menos);
   
    return 0;
}