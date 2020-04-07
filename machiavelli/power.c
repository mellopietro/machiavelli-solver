#include "function.h"

int power(int n){
    int p=1;
    for(int i=0;i<n;i++)
        p*=2;
    return p;
}