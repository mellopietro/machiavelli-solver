#include "function.h"

mazzo azzera(){
    mazzo m;
    for(int i=0;i<4;i++)
        for(int j=0;j<13;j++)
            m.c[i][j]=0;
    return m;
}