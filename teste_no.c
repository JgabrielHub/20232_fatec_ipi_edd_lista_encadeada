#include "no.h"
int main(){
    struct no *no1, *no2;
    no1 = cria_no(10);
    exibe_no(no1);
    no2 = cria_no(20);
    exibe_no(no2);

    no1->proximo = no2; 
    exibe_no(no1->proximo); 

    no2->proximo = no1;
    exibe_no(no1->proximo->proximo);

    return 0;
}