#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
int Imprime_natural(int n){
    if (n == 0){
        printf("fin");
    } else {
       printf("%d\n",n);
       Imprime_natural(n-1);
    }

}

int main()
{
    int n;
    printf("ingrese un numero natural n:\n");
    fflush(stdin);
    scanf("%d",&n);
    Imprime_natural(n);
    return 0;
}
*/
/*
int Sume_natural(int n){
    if (n == 0){
        return 0;
    } else{
        return  (n + Sume_natural(n-1));
    }
}

int main(){
    int n;
    printf("ingrese un numero natural n:\n");
    fflush(stdin);
    scanf("%d",&n);
    printf("resultado:%d",Sume_natural(n));
return 0;
}
*/
char Ingresa_arr(char *b){
    int i;
    for (i=0;i<5;i++){
        printf("ingrese un caracter en la posicion %d:\n",i);
        fflush(stdin);
        scanf("%c",&b[i]);
    }
}

void Muestra_arr(char *c){
    int i;
    for (i=0;i<5;i++){
        printf("caracter en la posicion %d es:%c\n",i,c[i]);
    }
}

int Busca_char(char a[],int i,char encu){
    if (encu == a[i]){
        return i;
    } else{
        return -1;
    }
    Busca_char(a,i+1,encu);
}

int main(){
    char a[5],encu;
    int i;
    Ingresa_arr(a);
    Muestra_arr(a);
    printf("caracter a buscar:\n");
    fflush(stdin);
    scanf("%c",&encu);
    if (Busca_char(a,0,encu) == -1){
        printf("el caracter no se encuentra en el arreglo");
    } else{
        printf("el caracter se en cuentra en la posicion:%d",i);
    }
return 0;
}
