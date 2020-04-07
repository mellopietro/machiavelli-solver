#include "function.h"

void add(carta c, mazzo *m){
    segno s;
    if(c.s=='c')
        s=cuori;
    else if(c.s=='q')
        s=quadri;
    else if(c.s=='f')
        s=fiori;
    else if(c.s=='p')
        s=picche;
    m->c[s][c.n-1]++;
}