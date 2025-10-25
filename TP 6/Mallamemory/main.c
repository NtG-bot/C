#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
/*
int main()
{
    int a=(int)malloc(sizeof(int));
    if (a==NULL){
        printf("error al asignar");
    }
    *a=10;
    printf("direccion:%p \n",a);
    printf("valor:%d \n",*a);
    printf("tamaño:%d \n",sizeof(*a) );


    char b=(char)malloc(sizeof(char));
    if (b==NULL){
        printf("error al asignar");
    }
    *b='c';
    printf("direccion:%p \n",b);
    printf("valor:%c \n",*b);
    printf("tamaño:%d \n",sizeof(*b) );

    float c=(float)malloc(sizeof(float));
    if (c==NULL){
        printf("error al asignar");
    }
    *c=3,14;
    printf("direccion:%p \n",c);
    printf("valor:%f \n",*c);
    printf("tamaño:%d \n",sizeof(*c) );

    int n;
    printf("ingrese n:\n");
    scanf("%d",&n);
    if (*a==NULL){
        printf("error al asignar");
    }
    printf("direccion:%p \n",a=(int)malloc(sizeof(int)*n));
    printf("valor:%d \n",*a);
    printf("tamaño:%d \n",sizeof(*a));
    free ((void*)c);
    free ((void*)a);
    free ((void*)b);
    free ((void*)n);



    return 0;
}
*/

int main(){
int n, i;

    printf("ingrese n;\n");
    scanf("%d",&n);
    int *ptr_n=(int)malloc(sizeof(int)*n);
    if (ptr_n==NULL){
        printf("no se pudo asignar memoria");
        exit (0);
    }
    for (i=0;i<n;i++){
        ptr_n[i]=i;
    }
    for (i=0;i<n;i++){
        printf("%d \n",ptr_n[i]);
    }
return 0;
}

/*
typedef struct {
    char a;
    int b;
} info;

int main(){

    info *ptr=(info*)malloc(sizeof(info));
    if (ptr==NULL){
        printf("no se pudo asignar memoria\n");
    }

    ptr->a ='c';
    ptr->b = 2;
    printf("%c,%d\n",ptr->a,ptr->b);

return 0;
}
*/
