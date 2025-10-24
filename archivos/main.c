#include <stdio.h>
#include <stdlib.h>
/*
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
        fprintf(puntero,"Nro Cuenta\tTransaccion\tMonto\n");
        for(i=0; i<5; i++)
        {
            fprintf(puntero,"%d\t",a[i].cuenta);
            fprintf(puntero,"%c\t",a[i].transaccion);
            fprintf(puntero,"%.2f\n",a[i].monto);
        }
    }
    fclose(puntero);



    return 0;
}
*/

typedef struct
{
    char nomb[30];
    char ape[30];
    int antiguedad;
} EMPLEADO;

int main()
{
    EMPLEADO personal[3];
    EMPLEADO otro_personal[3];
    EMPLEADO nuevos[3];
    int i, cant=3, otro_cant;
    for(i=0; i<cant; i++)
    {
        printf("ingrese nombre:\n");
        scanf("%s",personal[i].nomb);
        getchar();
        printf("ingrese apellido:\n");
        scanf("%s",personal[i].ape);
        getchar();
        printf("ingrese antiguedad:\n");
        scanf("%d",&personal[i].antiguedad);
        getchar();
    }
    for(i=0; i<cant; i++)
    {
        printf("nombre:%s\n",personal[i].nomb);
        printf("apellido:%s\n",personal[i].ape);
        printf("antiguedad:%d\n",personal[i].antiguedad);
    }
    FILE *per=fopen("personal.txt","w");
    if (per == NULL)
    {
        printf("error");
    }
    else
    {
        fwrite(&cant,sizeof(int),1,per);
        fwrite(personal,sizeof(EMPLEADO),cant,per);
    }
    for(i=0; i<cant; i++)
    {
        printf("ingrese nombre:\n");
        scanf("%s",nuevos[i].nomb);
        getchar();
        printf("ingrese apellido:\n");
        scanf("%s",nuevos[i].ape);
        getchar();
        printf("ingrese antiguedad:\n");
        scanf("%d",&nuevos[i].antiguedad);
        getchar();
    }
    FILE *nuev=fopen("nuevos.txt","w");
    if (nuev == NULL)
    {
        printf("error");
    }
    else
    {
        fwrite(&cant,sizeof(int),1,nuev);
        fwrite(nuevos,sizeof(EMPLEADO),cant,nuev);
    }
    fclose(nuev);
    nuev = fopen("nuevos.txt","r");
    fread(&otro_cant,sizeof(int),1,nuev);
    fread(otro_personal,sizeof(EMPLEADO),otro_cant,nuev);
    for(i=0; i<cant; i++)
    {
        printf("nombre:%s\n",otro_personal[i].nomb);
        printf("apellido:%s\n",otro_personal[i].ape);
        printf("antiguedad:%d\n",otro_personal[i].antiguedad);
    }

    fclose(per);
    return 0;
}

