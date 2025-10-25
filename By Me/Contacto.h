#ifndef CONTACTO_H_INCLUDED
#define CONTACTO_H_INCLUDED
#include <string.h>
#include "malloc.h"
#define MAX 3
typedef struct{
char nombre[21];
char alias_cbu[23];
int tipo_cuenta;
} Contacto;

typedef struct{
Contacto contactos[MAX];
int cur;
int ultimo;
} Lista_contactos;

void InitListaEs(Lista_contactos *l){       //da valores "por defecto" a las variables
    l->cur = -1;
    l->ultimo = -1;
}

void ResetListaEs(Lista_contactos *l){      //envia al cursor al inicio del arreglo(en este caso)
    l->cur = 0;
}

int IsEmptyListaEs(Lista_contactos l){      //indica si la lista esta vacia
    return (l->ultimo == -1);
}

int isFullListaEs(Lista_contactos l){       //indica si la list esta llena
    return (l->ultimo == MAX - 1);
}

int IsOosListaEs(Lista_contactos l){        //indica si el cursor esta fuera de rango
   return (l->ultimo == l->ultimo + 1);
}

Contacto CopyListaEs(Lista_contactos *l){   //devuelve el valor(se usa para mostrar)
    return l->contactos[l->cur];
}

void set_alias_cbu(Lista_contactos *l, int aliascbu){           //guarda la info de alias o CBU
    strcpy(l->contactos[l->cur].alias_cbu,aliascbu);
}

char get_alias_cbu(Lista_contactos l){                  //devuelve la info de alias o CBU, corte copy
    char *aux = (char*)malloc(sizeof(strlen(l->contactos[l->cur].alias_cbu) + 1));
    strcpy(aux, l->contactos[l->cur].alias_cbu);
    return aux;
}

void set_nombre(Lista_contactos *l, char nombre[]){             //lo mismo pero con el nombre
    strcpy(l->contactos[l->cur].nombre, nombre);
}

void get_nombre(Lista_contactos l){                 //devuelve el nombre
    char *aux = (char*)malloc(sizeof(strlen(l->contactos[l->cur].nombre) + 1));
    strcpy(aux, l->contactos[l->cur].nombre);
    return aux;
}

void set_tipo_cuenta(Lista_contactos *l, int cuenta){               //lo mismo pero con el tipo, recuerden que esta codificado
    l->contactos[l->cur].tipo_cuenta = cuenta;
}

void get_tipo_cuenta(Lista_contactos l){                    //devuelve tipo de cuenta
    return l->contactos[l->cur].tipo_cuenta;
}

void InsertListaEs(Lista_contactos *l, Contacto a){                 //mueve uno hacia la derecha, recuerden que inserta tipo pila, y inserta
    if( a->ultimo == -1 )
    {
        a->ultimo++;
        a->cursor++;
    }
    else
    {
        a->ultimo++;
        int i;
        for( i = a->ultimo ; i == a->cursor ; i-- )
        {
            l->contactos[i] = l->contactos[ i-1 ] ;
        }
    }
    strcpy(l->contactos[l->cur].nombre, get_nombre(l));
    strcpy(l->contactos[l->cur].alias_cbu, get_alias_cbu(l));
    l->contactos[l->cur].tipo_cuenta = get_tipo_cuenta(l);
}


void ForwardsListaEs(Lista_contactos *l){     //mueve el cursor al siguiente
    l->cur++;
}

void SupressListaEs(Lista_contactos *l){      //elimina el elemento donde esta el cursor (hay que laburarlo)

}


#endif // CONTACTO_H_INCLUDED
