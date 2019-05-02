#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Producto.h"

void mostrarArrayConProveedor(eProducto listaProductos[], int tamprod, eProveedor listaProveedores)
{
    int i;
    int j;
    for(i=0; i<tamprod; i++)
    {
        mostrarProducto(listaProductos[i]);
        for(j=0; j<tamprod; j++)
        {
            if(listaProductos[i].idProveedor ==listaProveedores[j].id)
                mostrarProveedor(listaProveedores[j]);
        }
    }
}
void inicializarProveedor(eProveedor[], int cant)
{
    int i;

    int[3]= {50, 42,95, 9.52};
    char descripcion[3][50]= {"petrolera", "petrolera", "petrolera"};
    char localidad[3][50]= {"Avellaneda", "Bahia Blanca", "Rio Negro"};
    char cuit[3][13]= {"4444", "5555", "6666"};
    char duenio[3][50]= {"IPF", "AXION", "SHELL"};

    for(i=0; i<3; i++)
    {
        strcpy(listaProductos[i].duenio,duenio[i]);
        strcpy(listaProductos[i].descripcion,descripcion[i]);
        strcpy(listaProductos[i].localidad,localidad[i]);
        strcpy(listaProductos[i].cuit,cuit[i]);
        listaProductos[i].precio=precio[i];
        listaProductos[i].estado = OCUPADO;
    }
}

void inicializarProductos(eProducto listaProductos[], int cant)
{
     int i;

    float precio[10]= {42,43,44,40,41,42,35,36,37,38};
    char nombre[10][50]= {"infinia", "axion power", "V-power", "inifinia dixel", "axion dicel", "V-power dixel", "super", "axion super", "normal", "kerosene"};
    char codigoDeBarra[10][13]= {"680", "220", "423", "500", "982", "456", "758", "532", "785", "492"};
    char fechaDeVencimiento[10][50]= {"02/06/2020", "11/08/2020", "08/01/2020", "02/04/2020", "03/10/2020", "09/12/2020", "30/11/2020", "26/09/2020", "16/07/2020", "22/05/2020"};
    int idProveedor[10][50]={1,2,3,1,2,3,1,2,3,1};

    for(i=0; i<3; i++)
    {
        strcpy(listaProductos[i].codigoDeBarra,codigoDeBarra[i]);
        strcpy(listaProductos[i].nombre,nombre[i]);
        strcpy(listaProductos[i].idProveedor,idProveedor[i]);
        strcpy(listaProductos[i].fechaDeVencimiento, fechaDeVencimiento[i]);
        listaProductos[i].precio=precio[i];
        listaProductos[i].estado = OCUPADO;
    }
}


eProducto pedirProducto()
{
    eProducto productoParaRetornar;

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(productoParaRetornar.nombre);

    printf("Ingrese proveedor: ");
    fflush(stdin);
    gets(productoParaRetornar.idProveedor);

    printf("Ingrese codigo de barra: ");
    fflush(stdin);
    gets(productoParaRetornar.codigoDeBarra);

    printf("Ingrese fecha de vencimiento: ");
    fflush(stdin);
    gets(productoParaRetornar.fechaDeVencimiento);

    printf("Ingrese precio: ");
    scanf("%f", &productoParaRetornar.precio);

    productoParaRetornar.estado= OCUPADO;

    return productoParaRetornar;
}


void mostrarProducto(eProducto unProducto)
{
    printf("%s %10s %15s %15s %15f %10d\n", unProducto.nombre, unProducto.idProveedor, unProducto.codigoDeBarra, unProducto.fechaDeVencimiento, unProducto.precio, unProducto.estado);
}


void cargarArray(eProducto listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        listado[i]= pedirProducto();
    }
}


void mostrarArray(eProducto listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        if(listado[i].estado == OCUPADO)
        {
            mostrarProducto(listado[i]);
        }
    }
}


void construirArray(eProducto listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        listado[i].estado= LIBRE;
        listado[i].precio= 0;
        strcpy(listado[i].nombre, "");
        strcpy(listado[i].idProveedor, "");
        strcpy(listado[i].codigoDeBarra, "");
        strcpy(listado[i].fechaDeVencimiento, "");
    }
}


int insertarProducto(eProducto listado[], int cant)
{
    int indice;
    indice= dameLugarLibre(listado, cant);
    if(indice != -1)
    {
        listado[indice]= pedirProducto();
    }
    return indice;
}


int dameLugarLibre(eProducto listado[], int cant)
{
    int i;
    int index= -1;

    for(i=0; i<cant; i++)
    {
        if(listado[i].estado == LIBRE)
        {
            index= i;
            break;
        }
    }
    return index;
}


int borrarProducto(eProducto lista[], int tam)
{
    int i;
    int loEncontro= 0;

    char codigo[50];

    printf("Ingrese el codigo de barra: ");
    fflush(stdin);
    gets(codigo);

    for(i=0; i<tam; i++)
    {
        if(strcmp(lista[i].codigoDeBarra, codigo) == 0)
        {
            lista[i].estado= LIBRE;
            loEncontro= 1;
            break;
        }
    }

    if(loEncontro == 0)
    {
        printf("Codigo inexistente");
    }

    return 0;
}


int editarProducto(eProducto lista[], int tam)
{
    int i;
    int loEncontro= 0;

    char codigo[50];

    printf("Ingrese el codigo de barra: ");
    fflush(stdin);
    gets(codigo);

    for(i=0; i<tam; i++)
    {
        if(strcmp(lista[i].codigoDeBarra, codigo) == 0)
        {
            printf("Ingrese el nuevo precio: ");
            scanf("%f", &lista[i].precio);
            loEncontro= 1;
            break;
        }
    }

    if(loEncontro == 0)
    {
        printf("Codigo inexistente");
    }

    return 0;
}
