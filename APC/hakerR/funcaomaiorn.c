 #include <stdio.h>

 int max_of_four(int a, int b, int c, int d){

    int maior=0;

    if( a > b && a > c && a > d){
        maior = a;
    }

    if( b > a && b > c && b > d){
        maior = b;
    }

    if( c > a && c > b && c > d){
        maior = c;
    }

    if( d > a && d > b && d > c){
        maior = d;
    }

    return maior;
 }

 int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}