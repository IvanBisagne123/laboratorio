#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED

typedef struct
{
    char nombre[50];
    char codigoDeBarra[13];
    char fechaVencimiento[50];
    char proveedor[50];
    char estado;
    float precio;

}eProducto;


#endif // PRODUCTO_H_INCLUDED
eProducto unProducto();
void mostrarProducto(eProducto);
void cargarArray(int, eProducto);
void mostrarArray(int tan, eProducto listado[]);
void construirArray(int tam, eProducto listado[]);
int inserteProducto(eProducto,eProducto[]);
int dameLuarLibre(eProducto[]);
int existeProducto(eProducto,eProducto[]);
int borrarProducto(eProducto,eProducto[]);
