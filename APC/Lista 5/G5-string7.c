#include <stdio.h>
#include <string.h>
  
    int main(){
        char str[60];
        scanf("%s", str);

        int x=0;
        for(int i=0; str[i]!='\0'; i++){
           if(str[i]== 'a'|| str[i]== 'e' || str[i]== 'i'|| str[i]== 'o'|| str[i]== 'u'){
                x=1;
           }
        }

        char c[60];
        int j=0;
        int tam = strlen(str);
        for(int i= tam-1; i >= 0; i--){
            c[j] = str[i];
            j++;
        }

        c[j]='\0';

        char vogal[60];
        int v=0;
        for(int i=0; str[i]!= '\0'; i++){
            if(str[i]== 'a'|| str[i]== 'e' || str[i]== 'i'|| str[i]== 'o'|| str[i]== 'u'){
                vogal[v] = str[i];
                    v++;
            }
        }

        vogal[v]='\0';

        char vogal2[60];
        v=0;
        for(int i=0; c[i]!= '\0'; i++){
            if(c[i]== 'a'|| c[i]== 'e' || c[i]== 'i'|| c[i]== 'o'|| c[i]== 'u'){
                vogal2[v] = c[i];
                    v++;
            }
        }
        vogal2[v]='\0';

    int h=0;
    if(x==1)
    {
        for(int i=0; vogal[i]!='\0'; i++)
        {
                if (vogal[i] != vogal2[i])
                {
                    h=1;
                }  
        }
        if(h==1){
                printf("N\n");
            } 
                else{
                    printf("S\n");
                    }
    
    }
            else{
                printf("Valor invalido!\n");
                }

    return 0;
    }
    //determine para uma risada digital, se ela é das mais engraçadas ou não.Mais engraçada S, memnos engraçada N
    //Se a entrada for inválida, seu programa deve imprimir em uma linha a mensagem Valor inválido!.(será invalida quando não tiver nenhuma vogal)