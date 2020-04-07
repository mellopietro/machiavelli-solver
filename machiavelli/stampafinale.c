#include "function.h"

void stampafinale(mazzo m){
    for(int i=0;i<4;i++){
        for(int j=0;j<13;j++)
            if(m.c[i][j]==1){
                if(i==0)
                    printf("%dc ",j+1);
                else if(i==1)
                    printf("%dq ",j+1);
                else if(i==2)
                    printf("%df ",j+1);
                else 
                    printf("%dp ",j+1);
            }
    }
    printf("\n");
}