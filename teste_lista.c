#include "lista.h"

int main(){
    lista l;
    int n;
    inicia_lista(&l);
    for (n = 1; n <= 8; n++)
    {
        if(insere_inicio(n,&l)){
            printf("%d inserido no inicio da lista com sucesso\n",n);
            exibe_lista(&l);
        }
        else{
            printf("falha na alocacao de memoria\n");
        }
    }
    return 0;
}