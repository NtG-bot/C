#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Ingresa_char(char *a[]){
        int i;
        for (i=0;i<5;i++){
            printf("ingrese el caracter de la posicion %d:\n",i);
            fflush(stdin);
            scanf("%c",&a[i]);
        }
}
void Muestra_char(char *b[]){
        int i;
        for (i=0;i<5;i++){
            printf("el cararcter de la posicion %d es:%c\n",i,b[i]);
        }
}
char Mueve_char(char *c[],int pos,char nv){
            int i;
            for (i=4;i>4;i--){
                c[i]=c[i-1];
            }
}

int main()
{
    char caracter[5],nvch;
    int posicion;
    Ingresa_char(caracter);
    Muestra_char(caracter);
    printf("nuevo char:\n");
    fflush(stdin);
    scanf("%c",&nvch);
    printf("ingrese el numero de posicion:\n");
    fflush(stdin);
    scanf("%d",&posicion);
    Mueve_char(caracter,posicion,nvch);
    Muestra_char(caracter);
    return 0;
}
