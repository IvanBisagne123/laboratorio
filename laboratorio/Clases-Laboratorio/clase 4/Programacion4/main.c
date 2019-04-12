#include <stdio.h>
#include <stdlib.h>
#define TAM 4

//void puntero(char*nombre,char*apellido,int*edad,int*nota);
//void getString(char mensaje[],char input[]);
//int esSoloLetras(char[]);
void mostrarAlumnos(char[][50],char[][50],int[],int[],int[]);
void ordenarAlumnos(char[][50],char[][50],int[],int[],int[]);


int main()
{
    char nombre[TAM][50]={"jose","roberto","alberto","pedro"};
    char apellido[TAM][50]={"Rodrigues","Peres","Rodriges","Meza"};
    int edad[TAM]={56,25,32,14};
    //char mail[][30];
    int nota[TAM]={10,9,8,7};

    int i;
    int j;

    ordenarAlumnos(nombre,apellido,edad,nota,TAM);
    mostrarAlumnos(nombre,apellido,edad,nota,TAM);

    return 0;
}
/*void getstring(char mensaje[], char input[])
{
printf(mensaje);
scanf("%s",input);
}
int esSololetras(char palabra[])
{
 int i;
 for(i=0; i;;)
    {
    if(palabra[i]<'a'&& palabra[i]>'a')

    }
}
int esSololetras(char[])
{
int i;
while(palabra[i]!= -º)

}*/
void ordenarAlumnos(char nombre[][50],char apellido[][50],int edad[],int nota[],int tamanio[])
{
    char auxCadena[50];
    int auxEntero;
    int i, j;
    for(i=0; i<TAM-1; i++)
    {
        for(j=i+1; j<TAM; j++)
        {
            if(strcmp(nombre[i],nombre[j])>1)
            {
                strcpy(auxCadena,nombre[i]);
                strcpy(nombre[i],nombre[j]);
                strcpy(nombre[j],auxCadena);

                strcpy(auxCadena,nombre[i]);
                strcpy(nombre[i],nombre[j]);
                strcpy(nombre[j],auxCadena);

                auxEntero = edad[i];
                edad[i] = edad[j];
                edad[j] = auxEntero;

                auxEntero = nota[i];
                nota[i] = nota[j];
                nota[j] = auxEntero;
            }
        }
    }
}
void mostrarAlumnos(char nombre[][50],char apellido[][50],int edad[],int nota[],int tamanio[])
{
    int i;
    printf("%10s\t%10s\t%s\t%s\n","nombre","apellido","edad","nota");
    for(i=0; i<TAM; i++)
    {
        if(nombre[i] !=-1)
        {
            printf("%10s\t%10s\t%d\t%d\n", nombre[i],apellido[i],edad[i],nota[i]);
        }
    }
}







