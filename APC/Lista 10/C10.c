#include <stdio.h>

int main(){

int jogadorA;
int jogadorB;
scanf("%d", &jogadorA);
scanf("%d", &jogadorB);

if(jogadorA==0 && jogadorB==5){//corda ganha de pedra
    printf("A");
}

if(jogadorB==0 && jogadorA==5){
    printf("B");
}

if(jogadorA==1 && jogadorB==4){ //tesoura ganha de papel
    printf("A");
}

if(jogadorB==1 && jogadorA==4){
    printf("B");
}

if(jogadorA==1 && jogadorB==0){//tesoura ganha de corda
    printf("A");
}

if(jogadorB==1 && jogadorA==0){
    printf("B");
}

if(jogadorA==2 && jogadorB==3){//agua ganha de fogo
    printf("A");
}

if(jogadorB==2 && jogadorA==3){
    printf("B");
}

if(jogadorA==2 && jogadorB==0){//agua ganha de corda
    printf("A");
}

if(jogadorB==2 && jogadorA==0){
    printf("B");
}

if(jogadorA==2 && jogadorB==4){//agua ganha de papel
    printf("A");
}

if(jogadorB==2 && jogadorA==4){
    printf("B");
}

if(jogadorA==2 && jogadorB==1){//agua ganha de tesoura
    printf("A");
}

if(jogadorB==2 && jogadorA==1){
    printf("B");
}

if(jogadorA==3 && jogadorB==4){//fogo ganha de papel
    printf("A");
}

if(jogadorB==3 && jogadorA==4){
    printf("B");
}

if(jogadorA==3 && jogadorB==1){//fogo ganha de tesoura
    printf("A");
}

if(jogadorB==3 && jogadorA==1){
    printf("B");
}

if(jogadorA==3 && jogadorB==0){//fogo ganha de corda
    printf("A");
}

if(jogadorB==3 && jogadorA==0){
    printf("B");
}

if(jogadorA==3 && jogadorB==5){//fogo ganha de pedra
    printf("A");
}

if(jogadorB==3 && jogadorA==5){
    printf("B");
}

if(jogadorA==4 && jogadorB==5){//papel ganha de pedra
    printf("A");
}

if(jogadorB==4 && jogadorA==5){
    printf("B");
}

if(jogadorA==4 && jogadorB==0){//papel ganha de corda
    printf("A");
}

if(jogadorB==4 && jogadorA==0){
    printf("B");
}

if(jogadorA==5 && jogadorB==1){//pedra ganha de tesoura
    printf("A");
}

if(jogadorB==5 && jogadorA==1){
    printf("B");
}

if(jogadorA==5 && jogadorB==2){//pedra ganha de agua
    printf("A");
}

if(jogadorB==5 && jogadorA==2){
    printf("B");
}

if(jogadorB==jogadorA){
     printf("empate");
}

//     Corda vale 0;
// • Tesoura vale 1;
// • Agua vale ´ 2;
// • Fogo vale 3;
// • Papel vale 4 e;
// • Pedra vale 5.
return 0;
}