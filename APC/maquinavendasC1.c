#include <stdio.h>

int main()
{
    int p;
    int v;
    int t, t500, t100, t50, t10, t5, t1;

scanf("%d" , &p);
scanf("%d" , &v);

t= (v-p); 

t500= t/500;
t %= 500;
    
t100= t/100;
t %= 100;

t50= t/50;
t %= 50;

t10= t/10;
t %= 10;

t5= t/5;
t %= 5;
    
t1= t/1;
t %= 1;

printf("%d\n%d\n%d\n%d\n%d\n%d" , t500, t100, t50, t10, t5, t1);
return 0;
}