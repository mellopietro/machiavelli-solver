#include <stdio.h>
#include <stdlib.h>

typedef enum {cuori,quadri,fiori,picche} segno;

typedef struct {
    int n;
    char s;
} carta;

typedef struct {
    int c[4][13];
} mazzo;

struct mossa{
    mazzo m;
    struct mossa *next;
};

typedef struct mossa *lista;


mazzo azzera();
void add(carta c, mazzo *m);
void stampa(mazzo m);
void stampafinale(mazzo m);
int ricorsiva(mazzo m, lista *l);
mazzo creafila(int i, int k);
mazzo creagruppo(int i,int k);
mazzo rimuovi(mazzo m, mazzo g);
int sinistra(mazzo m, int i, int n);
int segni(mazzo m, int i);
int fine(mazzo m);
int power(int n);
