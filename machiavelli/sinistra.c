#include "function.h"

int sinistra(mazzo m, int i, int n){
    int r=i/13, c=i%13, ok=1;
    for(int j=c;j>c-n;j--)
        if(!(j>=0&&m.c[r][j]>0))
            ok=0;
    return ok;
}