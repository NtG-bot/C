#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int cuenta;
    char transaccion;
    float monto;
} BANCO;

int main()
{
    BANCO a[5];
    int i;
    for(i=0; i<5; i++)
    {
        printf("ingrese nro cuenta:\n");
        scanf("%d",&a[i].cuenta);
        printf("ingrese transaccion:\n");
        getchar();
        scanf("%c",&a[i].transaccion);
        printf("ingrese monto:\n");
        scanf("%f",&a[i].monto);
    }
    for(i=0; i<5; i++)
    {
        printf("cuenta:%d\n",a[i].cuenta);
        printf("transaccion:%c\n",a[i].transaccion);
        printf("monto:%.2f\n",a[i].monto);
    }
    FILE *puntero = fopen("prueba_1.txt","w");
    if (puntero == NULL )
    {
        printf("no se pudo abrir el archivo\n");
    }
    else
    {
        for(i=0; i<5; i++)
        {
            fprintf(puntero,"%d\t",a[i].cuenta);
            fprintf(puntero,"%c\t",a[i].transaccion);
            fprintf(puntero,"%.2f\t\n",a[i].monto);
        }
    }
    fclose(puntero);



    return 0;
}
