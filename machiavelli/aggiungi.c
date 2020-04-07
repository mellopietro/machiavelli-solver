#include "function.h"

lista aggiungi(lista l, mazzo m){
    lista n=malloc(sizeof(struct mossa));
    n->m=m;
    n->next=l;
    return n;
}