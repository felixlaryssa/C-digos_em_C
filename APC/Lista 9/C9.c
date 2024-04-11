#include <stdio.h>
int main()
{
    char letra;
    scanf("%c\n" , &letra);

    char str[1000];
    scanf("%[^\n]" , str);

    double v1=0;
    double v2=0;
    for(int i=0; str[i] != '\0'; i++){
        for( ;str[i] != ' ' && str[i] != '\0'; i++){
             if(str[i] == letra){
                v1++;
             }
        }
        if(v1>0){
         v2++;
         v1=0;
        }
    }

 
    int palavras=1;
      for(int i=0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            palavras++;
        }
  
      }
   
    double porcentagem = 0;
    porcentagem = (v2) * 100.0 / palavras;
    printf("%0.1f" , porcentagem);

}