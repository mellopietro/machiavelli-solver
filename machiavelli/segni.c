#include "function.h"

int segni(mazzo m, int i){
    int c=i%13, j, k=0,h=0;
    for(j=0;j<4;j++){
        if(m.c[j][c]>0){
            h++;
            if(j==0)
                k++;
            else if(j==1)
                k+=2;
            else if(j==2)
                k+=4;
            else
                k+=8;
        }
    }
    if(h>=3)
        return k;
    return 0;
}