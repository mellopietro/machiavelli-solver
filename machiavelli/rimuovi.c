#include "function.h"

mazzo rimuovi(mazzo m, mazzo g){
    for(int i=0;i<13;i++)
        for(int j=0;j<4;j++)
            m.c[j][i]-=g.c[j][i];
    return m;
}
