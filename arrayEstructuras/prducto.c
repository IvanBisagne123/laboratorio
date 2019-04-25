#include <stdio.h>
#include <stdlib.h>
#include "producto.h"
int inserteProducto(eProducto,eProducto[]);
int dameLuarLibre(eProducto[]);
int existeProducto(eProducto,eProducto[]);
int borrarProducto(eProducto,eProducto[]);//int editarProducto(eProducto,eProducto[]);
int inserteProducto(eProducto,eProducto[]);{
    int indice;
    indice=dameLuarLibre(listado);
    if(indice!=-1)
    {
        listado[indice]=elProducto;
    }
    return indice;
}
int borrarProducto(eProducto,eProducto[])
{
    int indice;
    indice=existeProducto(listado);
    if(indice!=-1)
    {
        listado[indice].estado=-1;
    }
}
void construirArray(int tam, eProducto listado[i])
{
    int i;
    for(i=0;i<tam; i++)
    {
        listado[i].estado;
        strcpy(listado[i].nombre);
        strcpy(listado[i].codigoDeBarra);
        strcpy(listado[i].fechaVencimiento);
        listado[i].proveedor;

        listado[i].precio;
}
void mostrarArray(int tam, eProducto listado[])
{
    int i;
    for(i=0; i<tan; i++)
    {
        mostrarProducto(listado[i]);
    }
}
void mostrarArray(int tam, eProducto listado[]);
{
    int i;
    for(i=0; i<tan; i++)
    {
        listado[i]=pedirProducto();
    }
}

eProducto pedirProducto()
{
    eProducto productoParaRetornar;
 sprintf("ingrese CodigoDeBarra: ");
 fflush(stdin);
 gets(productoParaRetornar.codigoDeBarra);

 printf("ingrese Nombre: ");
 fflush(stdin);
 gets(productoParaRetornar.nombre);

 printf("ingrese FechaDeVencimiento: ");
 fflush(stdin);
 gets(productoParaRetornar.fechaVencimiento);

 printf("ingrese Precio: ")
 fflush(stdin);
 gets(productoParaRetornar.precio);

 printf("ingrese Proveedor: ");
 fflush(stdin);
 gets(productoParaRetornar.proveedor);


    return productoParaRetornar;
}
void mostrarProducto(eProducto elParametroParaProducto)
{
    printf("\n\n\n \t\t<<<< producto >>>>\n");
    printf("\ntributo\t valor ");
    printf("\n--------------------------");
    printf("\nCodigo :\t %s", elParametroParaProducto.codigoDeBarra);
    printf("\nNombre :\t %s", elParametroParaProducto.nombre);
    printf("\nProveedor :\t %s", elParametroParaProducto.proveedor);
    printf("\nFecha Vencimiento :\t %s", elParametroParaProducto.fechaVencimiento);
}

