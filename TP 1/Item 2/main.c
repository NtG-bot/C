#include <stdio.h>
#include <stdlib.h>

int main()
{
    int not1,not2,not3,not4,prom;
    printf("ingrese el valor de la nota 1:\n");
    scanf("%d",&not1);
    printf("ingrese el valor de la nota 2:\n");
    scanf("%d",&not2);
    printf("ingrese el valor de la nota 3:\n");
    scanf("%d",&not3);
    printf("ingrese el valor de la nota 4:\n");
    scanf("%d",&not4);
    prom=(not1+not2+not3+not4)/4;
    printf("el promedio es:%d",prom);
    return 0;
}
