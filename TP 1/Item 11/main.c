#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,nota1,nota2,resultado;
   do { printf("*****************************************\n");
    printf("*              Bienvenido               *\n");
    printf("*****************************************\n");
    printf("<1>Cargar notas\n<2>Mostrar Notas\n<3>Calcular promedio\n<4>Calcular el menor\n<5>Salir\n");
    printf("seleccione una opcion:\n");
    scanf("%d",&n);
    switch (n){
    case 1:{printf("ingrese la primer nota:\n");
            scanf("%d",&nota1);
            printf("ingrese la segunda nota:\n");
            scanf("%d",&nota2);
            break;}
    case 2:{printf("la primer nota es:%d\n",nota1);
            printf("la segunda nota es:%d\n",nota2);
            break;}
    case 3:{resultado=(nota1+nota2)/2;
            printf("el promedio es:%d\n",resultado);
            break;}
    case 5:{printf("saliendo...");
            break;}
    default:printf("Opción no válida. Intente de nuevo.\n");
    }
   } while (n=!5);
    return 0;
}


