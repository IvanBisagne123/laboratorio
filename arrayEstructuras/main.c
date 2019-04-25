#include <stdio.h>
#include <stdlib.h>
#include "producto.h"

int main()
{
    eProducto unProducto;
    //unProducto=pedirProducto;
    //mostrarPrducto(unProducto);
    //definir array;
    eProducto listadoDeProducto[3];
    //cargar array;
    //cargar array(3,listadoDeProducto);
    costruirArray(3,listadoDeProducto);
    mostrarArray(3,listadoDeProducto);

    //mostrar array
    return 0;
}
