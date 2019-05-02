#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIBRE 0
#define OCUPADO 1
#define BORRADO -1

typedef struct
{
    int estado;
    float precio;
    char nombre[50];
    //char proveedor[50];
    char codigoDeBarra[13];
    char fechaDeVencimiento[50];
    int idProveedor[50];
}eProducto;

typedef struct
{
    char proveedor[50];
    int id[50];
    char descripcion[50];
    char localidad[50];
    char cuit[13];
    char duenio[50];

}eProveedor;

eProducto pedirProducto();

void inicializarProductos(eProducto[], int);

void mostrarProveedor(eProveedor);

void mostrarProducto(eProducto);

void cargarArray(eProducto[], int);

void mostrarArray(eProducto[], int);

void construirArray(eProducto[], int);

int insertarProducto(eProducto[], int);

int dameLugarLibre(eProducto[], int);

int borrarProducto(eProducto[], int);

int editarProducto(eProducto[], int);

void inicializarProveedor(eProveedor[], int);

void mostrarArrayConProveedor(eProducto listaProductos[], int tamprod, eProveedor listaProveedores)

