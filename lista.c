#include "lista.h"

void inicia_lista(lista *l)
{
    l->primeiro = NULL;
}

int esta_vazia(lista *l)
{
    return l->primeiro == NULL;
}

int insere_inicio(int i, lista *l)
{
    struct no *novo = cria_no(i);
    if (novo != NULL)
    {
        if (!esta_vazia(l))
        {
            novo->proximo = l->primeiro;
        }
        l->primeiro = novo;
        return 1;
        return 0;
    }
}

void exibe_lista(lista *l)
{   
    struct no *aux;
    if (esta_vazia(l))
    {
        printf("está vazia");
    }
    else {
        aux = l->primeiro;
        while (aux) // (aux != NULL)
        {
            exibe_no(aux);
            aux = aux->proximo; // aux aponta o proximo
        }
        printf("\n");
    }   
}