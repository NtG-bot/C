#include <stdio.h>
#include <stdlib.h>
//FILA DINAMICA:
typedef struct nodo {
    int dato;
    struct nodo *siguiente;
} Nodo;

typedef struct {
    Nodo *primero;
    Nodo *ultimo;
} Fila;

void init(Fila *f) {
    f->primero = NULL;
    f->ultimo = NULL;
}

int isEmpty(Fila f) {
    return (f.primero == NULL);
}

int isFull(Fila f) {
    Nodo *nuevoNodo = (Nodo *) malloc(sizeof(Nodo));
    if (nuevoNodo == NULL) return 1;
    free(nuevoNodo);
    return 0;
}

int insertF(Fila *f, int e) {
    Nodo *nuevoNodo = (Nodo *) malloc(sizeof(Nodo));
    if (nuevoNodo == NULL) return -1; // no hay memoria

    nuevoNodo->dato = e;
    nuevoNodo->siguiente = NULL;

    if (isEmpty(*f)) {
        f->primero = nuevoNodo;
    } else {
        f->ultimo->siguiente = nuevoNodo;
    }
    f->ultimo = nuevoNodo;
    return 1;
}

int pop(Fila *f) {
    if (isEmpty(*f)) return -1;

    Nodo *eliminar = f->primero;
    f->primero = eliminar->siguiente;

    free(eliminar);

    if (f->primero == NULL) {
        // La fila quedó vacía, actualizamos ultimo
        f->ultimo = NULL;
    }
    return 1;
}

int copyFila(Fila f) {
    if (isEmpty(f)) return -1; // fila vacía no hay dato
    return f.primero->dato;
}



//MAIN PRUEBA
int main() {
    Fila miFila;
    init(&miFila);

    insertF(&miFila, 10);
    insertF(&miFila, 20);
    insertF(&miFila, 30);

    printf("Primero: %d\n", copyFila(miFila)); // Imprime 10

    pop(&miFila);
    printf("Primero luego de pop: %d\n", copyFila(miFila)); // Imprime 20

    return 0;
}

