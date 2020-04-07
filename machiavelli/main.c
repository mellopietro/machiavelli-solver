#include "function.h"

int main(){
    mazzo m=azzera();
    lista l=NULL;
    carta c;
    printf("Benvenuto nel gioco: ");
    int soluzione=0;
    do{
        printf("Inserisci il prossimo gruppo di carte (3cqfp): ");
        char car;
        do{
            scanf("%d",&c.n);
            scanf("%c%c",&c.s,&car);
            add(c,&m); 
        } while(car!='\n');
        stampa(m);
        soluzione=ricorsiva(m,&l);
        if(soluzione!=0){
            char car;
            printf("Soluzione disponibile, procedere [y/N]: ");
            scanf("%c%*c",&car);
            if(car!='y')
                soluzione=0;
        }
    } while(soluzione==0);
    lista a=l;
    while(a!=NULL){
        stampafinale(a->m);
        a=a->next;
    }
}