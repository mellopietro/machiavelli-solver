#include "function.h"

mazzo creafila(int i, int k){
    mazzo m=azzera();
    for(int j=i;j>i-k;j--)
        m.c[j/13][j%13]=1;
    return m;
}

mazzo creagruppo(int i,int k){
    mazzo m=azzera();
    int c=i%13;
    for(int j=3;j>=0;j--)
        if(power(j)<=k){
            k-=power(j);
            m.c[j][c]=1;
        }
    return m;
}