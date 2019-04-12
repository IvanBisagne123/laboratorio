#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mostrarVector(int datos[],int tamanio);
void mostrarPalbras(char datos[][10],int tamanio);
void cargarVector(int datos[],int tamanio);
void ordenarVector(int datos[],int tamanio);
int main()
{
    char usuario[][10]={"Jose","Maria","Jesus","Melchor","Gaspar"};
    int nota[10]={8,5,2,10,3};
    int i;
    int j;

    mostrarVector(nota,5);
    cargarVector(nota,5);
    mostrarVector(nota,5);

    /*for(i=0;i<5;i++)
    {
        printf("Alumno\t %s \nNota: %d \n",usuario[i],nota[i]);

    }
    */
     for(i=0;i<5;i++)
    {
       for(j=0;j<4;j++)
        {
      //printf("%d=> %d \n",nota[i],nota[j]);

          if(strcmp(usuario[i],usuario[j])==-1)

          {
              int aux =nota[i];
              nota[i]=nota[j];
              nota[j]=aux;

              char auxString[10];
              strcpy(auxString,usuario[i]);
              strcpy(usuario[i],usuario[j]);
              strcpy(usuario[j],auxString);
          }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("Alumno\t %s \nNota: %d \n",usuario[i],nota[i]);

    }







    //orden por nota
    /*
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
          printf("%d=> %d \n",nota[i],nota[j]);
          if (nota[i]<nota[j])
          {
              int aux =nota[i];
              nota[i]=nota[j];
              nota[j]=aux;

              char auxString[10];
              strcpy(auxString,usuario[i]);
              strcpy(usuario[i],usuario[j]);
              strcpy(usuario[j],auxString);
          }
        }
    }
    */





        //usuario[i][0]=;
        //strcpyu(suario[i][0],"");//usuario[i][0]="";
        //nota[i]=0;
    /*for(i=0;i<5;i++)
    {
        printf("ingrese usuario # %d: \n",i+1);
        scanf("%s",usuario[i]);

        //printf("ingrese nota #%d: \n",i+1);
        //scanf("%d",&nota[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("Hello %s nota: %d \n",usuario[i],nota[i]);
    }
   // strcpy(usuario[0,"hola]);
  /*  ("test :%s \n",tamanio[0]);
    printf("test :%s \n",tamanio[1]);*/
/*
    printf("ingrese usuario :");
    scanf("%s",usuario[0]);
    printf("ingrese usuario :");
    scanf("%s",usuario[1]);

    int tamanio= strlen(usuario[8]);
*/
    return 0;
}
void mostrarVector(int datos[],int tamanio)
{
    int i;
    for(i=0;i<tamanio;i++)
    {
        printf("nota :%d \n",datos[i]);
    }
}
void cargarVector(int datos[],int tamanio)
{
    int i;
    for(i=0;i<tamanio;i++)
    {
        datos[i]=-1;
    }
}
void mostrarPalbras(char datos[][10],int tamanio)
{
    int i;
    for(i=0;i<tamanio;i++)
    {
        printf("nombre :%s \n",datos[i]);
    }
}
