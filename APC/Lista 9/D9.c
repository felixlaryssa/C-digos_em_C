#include <stdio.h>
#include <string.h>
int main()
{
    char consulta[1000];
    int cont1=0;
    int countlines =0;
    int triagem = 0;
    while(scanf("%s" , consulta) != EOF)
    {
        countlines++; //contador de respostas
        if(strcmp(consulta , "sim") == 0){
            cont1++; //contador de sim
        }
        if (countlines >= 10)
        {
            if (cont1 >= 2)
            {
                triagem++;
            }

        countlines =0;
        cont1=0;
        }
    
    }
    printf("%d", triagem);
}