#include "no.h"

typedef struct {
    struct no * primeiro;
} lista;

void inicia_lista (lista *);

int esta_vazia (lista *);

int insere_inicio (int ,lista *);

void exibe_lista(lista *);
