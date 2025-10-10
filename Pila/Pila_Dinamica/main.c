#include <stdio.h>
#include <stdlib.h>

//*PILA DINAMICA:*
typedef struct nodo {
    int dato;
    struct nodo *siguiente;
} Nodo;

typedef struct {
    Nodo *tope;
} Pila;

void init(Pila *p) {
    p->tope = NULL;
}

int isEmpty(Pila p) {
    return (p.tope == NULL);
}

int isFull(Pila p) {
    Nodo *nuevoNodo = (Nodo *)malloc(sizeof(Nodo));
    if (nuevoNodo == NULL) return 1;
    free(nuevoNodo);
    return 0;
}

int push(Pila *p, int e) {
    if (isFull(*p)) return -1;
    Nodo *nuevoNodo = (Nodo *)malloc(sizeof(Nodo));
    if (nuevoNodo == NULL) return -1;

    nuevoNodo->dato = e;
    nuevoNodo->siguiente = p->tope;
    p->tope = nuevoNodo;
    return 1;
}

int pop(Pila *p) {
    if (isEmpty(*p)) return -1;

    Nodo *eliminar = p->tope;
    p->tope = eliminar->siguiente;
    free(eliminar);
    return 1;
}

int copyPila(Pila p) {
    if (isEmpty(p)) return -1;
    return p.tope->dato;
}


//MAIN DE PRUEBA:
int main() {
    Pila miPila;
    init(&miPila);

    push(&miPila, 10);
    push(&miPila, 20);
    push(&miPila, 30);

    printf("Tope: %d\n", copyPila(miPila)); // Imprime 30

    pop(&miPila);
    printf("Tope luego de pop: %d\n", copyPila(miPila)); // Imprime 20

    return 0;
}
