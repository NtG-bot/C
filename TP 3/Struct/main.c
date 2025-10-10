#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
int main()
{
   typedef struct parte{
    int numeroparte;
    char nombreparte[25];
    } Parte;
    Parte b[10];
    Parte a;
    printf("ingrese un numero:\n");
    scanf("%d",&a.numeroparte);
    printf("ingrese un nombre:\n");
    scanf("%s",a.nombreparte);
    printf("el numero es:%d\n",a.numeroparte);
    printf("el nombre es:%s\n",a.nombreparte);
    b[3].numeroparte=a.numeroparte;
    strcpy(b[3].nombreparte,a.nombreparte);
    printf("el numero es:%d\n",b[3].numeroparte);
    printf("el nombre es:%s\n",b[3].nombreparte);
    return 0;
}
*/
/*
typedef struct {
    int base;
    int alto;
    int ancho;
    } Rectangulo;
int main(){
    Rectangulo a;
    printf("ingrese la base:\n");
    scanf("%d",&a.base);
    printf("ingrese el alto:\n");
    scanf("%d",&a.alto);
    printf("ingrese el ancho:\n");
    scanf("%d",&a.ancho);
    int resultado;
    resultado = a.base * a.alto * a.ancho;
    printf("su resultado es:%d", resultado);
    return 0;
}
*/
/*
typedef struct {
    int base;
    int altura;
}   Triangulo;
int main(){
    Triangulo b;
    int resultado;
    printf("ingrese la base:\n");
    scanf("%d",&b.base);
    printf("ingrese la altura:\n");
    scanf("%d",&b.altura);
    resultado=b.base*b.altura;
    printf("su resultado es:%d",resultado);

return 0;
}
*/
/*
typedef struct{
    float x;
    float y;
} Cartesiana;
int main(){
    Cartesiana c;
    printf("ingrese la variable x:\n");
    scanf("%f",&c.x);
    printf("ingrese la variable y:\n");
    scanf("%f",&c.y);
    printf("sus coordenadas cartesianas son:%.2f,%.2f",c.x,c.y);
return 0;
}
*/
/*
typedef struct {
    char calle[20];
    int numcalle;
    char localidad[20];
    int codpos;
    long int numtel;
} Domicilio;
int main(){
    Domicilio d;
    printf("ingrese el nombre de la calle:\n");
    scanf("%s",d.calle);
    printf("ingrese el numero de la calle:\n");
    scanf("%d",&d.numcalle);
    printf("ingrese el nombre de la localidad:\n");
    scanf("%s",d.localidad);
    printf("ingrese el numero de codigo postal:\n");
    scanf("%d",&d.codpos);
    printf("ingrese el numero de telefono:\n");
    scanf("%d",&d.numtel);
    printf("el nombre de la calle es:%s\n",d.calle);
    printf("el numero de la calle es:%d\n",d.numcalle);
    printf("el nombre de la localidad es:%s\n",d.localidad);
    printf("el numero de codigo postal es:%d\n",d.codpos);
    printf("el numero de telefono es:%d\n",d.numtel);
return 0;
}
*/
typedef struct{
    int anio;
    int mes;
    int dia;
} Fecha;
typedef struct {
    char calle[20];
    int numcalle;
    char localidad[20];
    int codpos;
    long int numtel;
} Domicilio;
typedef struct{
    char nombre[30];
    int tipodoc;
    int numdoc[20];
    Domicilio dom;
    Fecha fnac;
    int estciv;
    int canthij;
    int sex;
} Empleado;
int main(){
    Empleado f;
    printf("ingrese el nombre del empleado:\n"); /*% [piquito\n´]s */
    scanf("%s",f.nombre);
    printf("ingrese el tipo de documento:<1>DNI,<2>Pasaporte\n");
    scanf("%d",&f.tipodoc);
    printf("ingrese el numero de documento:\n");
    scanf("%d",f.numdoc);
    scanf("%d", &f.fnac.dia);
    printf("ingrese el estado civil:<1>soltero,<2>casado\n");
    scanf("%d",&f.estciv);
    printf("ingrese la cantidad de hijos a cargo:\n");
    scanf("%d",&f.canthij);
    printf("ingrese su sexo:<1>masculino,<2>femenino,<3>otro\n");
    scanf("%d",&f.sex);
return 0;
}
