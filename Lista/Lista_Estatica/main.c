#include <stdio.h>
#include <stdlib.h>

//*LISTA ESTÁTICA QUE ENTRA EN PARCIAL:*

#define N 100

typedef struct {
    int datos[N];
    int cur;
    int ultimo;
} ListaE;

void initL(ListaE *l) {
    l->ultimo = -1;
    l->cur = 0;
}

int isOos(ListaE l) {
    return l.cur > l.ultimo;
}

int isEmpty(ListaE l) {
    return l.ultimo == -1;
}

int isFull(ListaE l) {
    return l.ultimo == N - 1;
}

void reset(ListaE *l) {
    l->cur = 0;
}

void forwards(ListaE *l) {
    if (l->cur <= l->ultimo)
        l->cur++;
}

int insertLista(ListaE *l, int elemento) {
    if (isFull(*l)) return -1;

    for (int i = l->ultimo; i >= l->cur; i--) {
        l->datos[i + 1] = l->datos[i];
    }
    l->datos[l->cur] = elemento;
    l->ultimo++;
    return 1;
}

int supressLista(ListaE *l) {
    if (isEmpty(*l)) return -1;
    if (isOos(*l)) return -2;

    for (int i = l->cur; i < l->ultimo; i++) {
        l->datos[i] = l->datos[i + 1];
    }
    l->ultimo--;
    return 1;
}

int copyLista(ListaE l) {
    return l.datos[l.cur];
}
