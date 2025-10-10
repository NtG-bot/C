#include <stdio.h>
#include <stdlib.h>
void Ingresa_notas(int *a){
    int i;
    float prom;
    for (i=0;i<4;i++){
        printf("ingrese la nota en la posicion %d:\n",i);
        scanf("%d",&a[i]);
    }
    prom=(a[0]+a[1]+a[2]+a[3])/4;
    if (prom >= 7){
        printf("Aprobado\n");
    } else {
        printf("Desaprobado\n");
    }
}

int main()
{
    int notas[4];
    Ingresa_notas(notas);
    return 0;
}
