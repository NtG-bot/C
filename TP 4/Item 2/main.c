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
    scanf("%[^\n]s",d.localidad);
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
/*
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
    long int numdoc;
    Domicilio dom;
    Fecha fnac;
    int estciv;
    int canthij;
    int sex;
} Empleado;
int main(){
    Empleado f;
    printf("ingrese el nombre del empleado:\n"); //%[^\n]//
    fflush(stdin);
    scanf("%[^\n]",f.nombre);
    printf("ingrese el tipo de documento:<1>DNI,<2>Pasaporte\n");
    fflush(stdin);
    scanf("%d",&f.tipodoc);
    printf("ingrese el numero de documento:\n");
    fflush(stdin);
    scanf("%d",&f.numdoc);
    printf("ingrese el nombre de la calle:\n");
    fflush(stdin);
    scanf("%[^\n]",f.dom.calle);
    printf("ingrese el numero de calle:\n");
    fflush(stdin);
    scanf("%d",&f.dom.numcalle);
    printf("ingrese el nombre de la localidad:\n");
    fflush(stdin);
    scanf("%[^\n]",f.dom.localidad);
    printf("ingrese el codigo postal:\n");
    fflush(stdin);
    scanf("%d",&f.dom.codpos);
    printf("ingrese el numero de telefono:\n");
    fflush(stdin);
    scanf("%ld",&f.dom.numtel);
    printf("ingrese el dia que nacio:\n");
    fflush(stdin);
    scanf("%d",&f.fnac.dia);
    printf("ingrese el mes de nacimiento:\n");
    fflush(stdin);
    scanf("%d",&f.fnac.mes);
    printf("ingrese el año de nacimiento:\n");
    fflush(stdin);
    scanf("%d",&f.fnac.anio);
    printf("ingrese el estado civil:<1>soltero,<2>casado\n");
    fflush(stdin);
    scanf("%d",&f.estciv);
    printf("ingrese la cantidad de hijos a cargo:\n");
    fflush(stdin);
    scanf("%d",&f.canthij);
    printf("ingrese su sexo:<1>masculino,<2>femenino,<3>otro\n");
    fflush(stdin);
    scanf("%d",&f.sex);
    printf("\n********************************************\n");
    printf("el nombre del empleado es:%s\n",f.nombre);
    switch (f.tipodoc){
    case 1: {  printf("el tipo de documento es:DNI\n");break; }
    case 2: {  printf("el tipo de documento es:Pasaporte\n"); break; }
    }
    printf("el numero de documento es:%ld\n",f.numdoc);
    printf("el nombre de la calle es:%s\n",f.dom.calle);
    printf("el numero de calle es:%ld\n",f.dom.numcalle);
    printf("el nombre de la localidad es:%s\n",f.dom.localidad);
    printf("el codigo postal es:%d\n",f.dom.codpos);
    printf("el numero de telefono es:%ld\n",f.dom.numtel);
    printf("el dia que nacio es:%d\n",f.fnac.dia);
    printf("el mes de nacimiento es:%d\n",f.fnac.mes);
    printf("el año de nacimiento es:%d\n",f.fnac.anio);
    switch (f.estciv){
    case 1: { printf("el estado civil es: Soltero\n");break; }
    case 2: { printf("el estado civil es: Casado\n");break; }
    }
    printf("la cantidad de hijos a cargo es:%d\n",f.canthij);
    switch (f.sex){
    case 1: {  printf("su sexo es:Masculino\n");break; }
    case 2: {  printf("su sexo es:Femenino\n");break; }
    case 3: {  printf("su sexo es:Otro\n");break; }
    }
return 0;
}
*/
typedef struct {
    char marca[20];
    char color[20];
    int control;
} Proyector;
typedef struct {
    int nroident;
    int bloque;
    char tipo[20];
    int cantmesas;
    int cantsillas;
    int cantpiza;
    Proyector a;
} Aula;
void Ingresa_aula(Aula *b[]){
    int i,n;
    for (i=0;i<n;i++){
        printf("ingrese de identificacion:\n");
        fflush(stdin);
        scanf("%d",b[i]->nroindent);
        printf("ingrese el bloque:\n");
        fflush(stdin);
        scanf("%d",b[i]->bloque);
        printf("ingrese el tipo:\n");
        fflush(stdin);
        scanf("%[^\n]",b[i]->tipo);
        printf("ingrese la cantidad de mesa:\n");
        fflush(stdin);
        scanf("%d",b[i]->cantmesas);
        printf("ingrese la cantidad de sillas:\n");
        fflush(stdin);
        scanf("%d",b[i]->cantsillas);
        printf("ingrese la cantidad de pizarras:\n");
        fflush(stdin);
        scanf("%d",b[i]->cantpiza);
        printf("ingrese la marca del proyector:\n");
        fflush(stdin);
        scanf("%[^\n]",b[i]->a.marca);



    }
}
int main(){
   Aula c[5];


return 0;
}
