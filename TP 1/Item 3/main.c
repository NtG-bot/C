#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    printf("ingrese su edad:\n");
    scanf("%d",&edad);
    if (edad>=16){
        printf("Usted ahora puede votar!");
    } else{
        printf("usted es menor de edad NO puede votar!");
    }
    return 0;
}
