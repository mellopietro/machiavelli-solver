#include "function.h"

int ricorsiva(mazzo m, lista *l){
    int i=fine(m);

    if(i<0)
        return 1;

    if(i%13==12&&m.c[i/13][0]>0){
        for(int k=2;k<=4;k++){
            if(sinistra(m,i,k)){
                mazzo g=creafila(i,k);
                g.c[i/13][0]=1;
                if(ricorsiva(rimuovi(m,g),l)==1){
                    *l=aggiungi(*l,g);
                    return 1;
                }
            }
        }
    }

    for(int k=3;k<=5;k++){
        if(sinistra(m,i,k)){
            mazzo g=creafila(i,k);
            if(ricorsiva(rimuovi(m,g),l)==1){
                *l=aggiungi(*l,g);
                return 1;
            }        
        }
    }

    int k=segni(m,i);

    if(k==15){
        for(int j=0;j<4;j++){
            mazzo g=creagruppo(i,k-power(j));
            if(ricorsiva(rimuovi(m,g),l)==1){
                *l=aggiungi(*l,g);
                return 1;
            }   
        }
    }

    if(k>0){
        mazzo g=creagruppo(i,k);
        if(ricorsiva(rimuovi(m,g),l)==1){
            *l=aggiungi(*l,g);
            return 1;
        }   
    }

    return 0;
}