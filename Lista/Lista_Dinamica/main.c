#include <stdio.h>
#include <stdlib.h>

//*LISTA DINÁMICA:*
typedef struct nodo {
    int dato;
    struct nodo *siguiente;
} Nodo;

typedef struct {
    Nodo *acceso;
    Nodo *cursor;
    Nodo *auxiliar;
} Lista;

void init(Lista *l) {
    l->acceso = l->cursor = l->auxiliar = NULL;
}

void reset(Lista *l) {
    l->cursor = l->auxiliar = l->acceso;
}

int isEmpty(Lista l) {
    return (l.acceso == NULL);
}

int isFull(Lista l) {
    Nodo *nuevoNodo = (Nodo *) malloc(sizeof(Nodo));
    if (nuevoNodo == NULL) return 1;
    free(nuevoNodo);
    return 0;
}

int isOos(Lista l) {
    return (l.cursor == NULL);
}

void forwards(Lista *l) {
    if (!isOos(*l)) {
        l->auxiliar = l->cursor;
        l->cursor = l->cursor->siguiente;
    }
}

int copyLista(Lista l) {
    if (isOos(l)) {
        printf("Cursor fuera de estructura\n");
        return -1;
    }
    return l.cursor->dato;
}

// Inserta nuevo nodo con dato e antes del cursor
int insertLista(Lista *l, int e) {
    if (isFull(*l)) return -1;

    Nodo *nuevoNodo = (Nodo *) malloc(sizeof(Nodo));
    if (nuevoNodo == NULL) return -1;

    nuevoNodo->dato = e;

    if (l->acceso == l->cursor) {
        // Inserción al inicio
        nuevoNodo->siguiente = l->acceso;
        l->acceso = l->auxiliar = l->cursor = nuevoNodo;
    } else {
        // Inserción en medio o final
        nuevoNodo->siguiente = l->cursor;
        l->auxiliar->siguiente = nuevoNodo;
        l->cursor = nuevoNodo;
    }
    return 1;
}

// Suprime el nodo apuntado por cursor
int suppress(Lista *l) {
    if (isEmpty(*l)) return -1;
    if (isOos(*l)) return -2;

    if (l->acceso == l->cursor) {
        // Suprimir primer nodo
        l->acceso = l->cursor->siguiente;
        free(l->cursor);
        l->auxiliar = l->cursor = l->acceso;
    } else {
        // Suprimir nodo en medio o final
        Nodo *eliminar = l->cursor;
        l->cursor = l->cursor->siguiente;
        l->auxiliar->siguiente = l->cursor;
        free(eliminar);
    }
    return 1;
}





//MAIN PRUEBA:
void imprimirLista(Lista l) {
    reset(&l);
    while (!isOos(l)) {
        int dato = copyLista(l);
        printf("%d ", dato);
        forwards(&l);
    }
    printf("\n");
}


int main() {
    Lista miLista;
    init(&miLista);

    insertLista(&miLista, 10);
    insertLista(&miLista, 20);
    insertLista(&miLista, 30);
    printf("Lista completa: ");
    imprimirLista(miLista);

    reset(&miLista);

    suppress(&miLista);
    printf("Lista despues de sacar el primer elemento: ");
    imprimirLista(miLista);

    return 0;
}
