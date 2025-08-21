#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    do {
        printf("ingrese su edad:\n");
    scanf("%d",&edad);
    } while (edad<15 && edad>69);{
        printf("usted puede votar y es obligatorio!");
    }
    return 0;
}
