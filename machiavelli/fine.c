#include "function.h"

int fine(mazzo m){
    int i=51,r=3,c=12;
    while(m.c[r][c]==0&&i>=0){
        i--;
        r=i/13;
        c=i%13;
    }
    return i;
}