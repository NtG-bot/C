#include <stdio.h>
#include <stdlib.h>

//*PILA ESTÁTICA QUE ENTRA EN PARCIAL*:
(En el .h / header):
#define MAX 100

typedef struct {
    int elementos[MAX];
    int tope;
} PilaEst;

void init(PilaEst *p) {
    p->tope = -1;
}

int isEmpty(PilaEst p) {
    return p.tope == -1;
}

int isFull(PilaEst p) {
    return p.tope == MAX - 1;
}

void apilar(PilaEst *p, int nro) {
        p->tope++;
        p->elementos[p->tope] = nro;
}

void desapilar(PilaEst *p) {
        p->tope--;
}

int top(PilaEst p) {
    return p.elementos[p.tope];
}
