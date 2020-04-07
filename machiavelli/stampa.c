#include "function.h"

void stampa(mazzo m){
    for(int i=0;i<4;i++){
        for(int j=0;j<13;j++)
            printf("%d ",m.c[i][j]);
        printf("\n");
    }
    printf("\n");
}