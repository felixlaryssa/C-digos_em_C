#include <stdio.h>

struct tipoLogradouro{
    char tipo[80];
    char nome[80];
    char complemento[80];
};

    void criaLinhaCSV (struct tipoLogradouro info, char linha[240]){
        int j=0, k=0, l=0;
        int i;
        for(i=0; info.tipo[i] != '\0'; i++){
            linha[i] = info.tipo[i]; 
        
        }

        linha[i] = ';';
        k++;
        for(j=0; info.nome[j] != '\0'; j++, k++){
            linha[k+i] = info.nome[j];
            
        }

        linha[k+i] = ';';
        i++;
        j++;

        for(k=0; info.complemento[k] != '\0'; k++, l++){
            linha[j+i+k] = info.complemento[k];
            
        }

        linha[j+i+k] = '\0';
        
    }

// int main()
// {
//  struct tipoLogradouro info;

//          fgets(info.tipo,80,stdin);

//         fgets(info.nome,80,stdin);

//         fgets(info.complemento, 80,stdin);

//     char linha[240]; //null
//     criaLinhaCSV (info, linha); }


//duda