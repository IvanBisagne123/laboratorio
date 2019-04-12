#include <stdio.h>
#include <stdlib.h>
#include "BIBLIO.h"
#define TAM 5

int const X=10;

int main()
{
    int miArray[TAM]={};
    int indice;

    cargarArray(miArray, TAM);
    mostrarArray(miArray, TAM);
    indice = buscarValor(miArray, TAM, 5);

    if(indice!=-1)
    {
        printf("\nEl indice es %d", indice);
    }else
    {
        printf("\nValor inexistente!!");
    }
    //printf("\nel indice es %d", indice);





    return 0;
}

