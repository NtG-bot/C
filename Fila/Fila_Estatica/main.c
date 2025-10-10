#include <stdio.h>
#include <stdlib.h>

//*FILA ESTÁTICA QUE ENTRA EN PARCIAL:*

#define MAX 100

typedef struct {
    int elementos[MAX];
    int ultimo;
} FilaEst;


void initFila(FilaEst *f) {
    f->ultimo = -1;
}

int isEmpty(FilaEst f) {
    return f.ultimo == -1;
}

int isFull(FilaEst f) {
    return f.ultimo == MAX - 1;
}

int insertF(FilaEst *f, int elemento) {
    if (isFull(*f)) return -1;
        f->ultimo++;
        f->elementos[f->ultimo] = elemento;
        return 1;
}

int supress(FilaEst *f) {
    if (isEmpty(*f)) return -1;
    int i,n;
    n=f->ultimo;
    for (i = 0; i < n; i++) {
        f->elementos[i] = f->elementos[i + 1];
     }
    f->ultimo--;
    return 1;
}

int copyF(FilaEst f){
    return f.elementos[0];
}
