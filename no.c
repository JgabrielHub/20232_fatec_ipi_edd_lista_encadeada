#include "no.h" 

struct no * cria_no (int i){
    struct no * temp = (struct no *) malloc (sizeof(struct no));  
    if (temp != NULL) {
        temp->info = i;
        temp->proximo = NULL;
    }
    return temp;  
}

void exibe_no (struct no * no){
    printf("| %d | -> ", no->info);
    if(no->proximo == NULL) printf("// ");
}