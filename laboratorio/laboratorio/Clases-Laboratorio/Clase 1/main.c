#include <stdio.h>
#include <stdlib.h>
// \t = tabular \n = saltear renglon    alt 92 = "\"
// printf %d para mostrar entero
// char* direccion del caracter
// & = direccion (siempre)

void Saludar(void);
int DameNumero(void);
float SacarPromedio(int suma,int cantidad);
void esPrimo(int numero);

int main()
{
    /*
    int edad;
    float altura;

    printf("\nIngrese su edad: ");
    scanf("%d",&edad);

    printf("\nIngrese su altura: ");
    scanf("%f",&altura);

    printf("\n    Resultados\n");
    printf("\nLa edad es: %d",edad);
    printf("\nLa altura es: %.1f \n",altura);
    */

    int contador=0;
    int num;
    int suma=0;
    float promedio;
    int limite;

    limite = DameNumero();

    while(contador<limite)
    {
        printf("\nIngrese un numero: ");
        scanf("%d",&num);
        suma=suma+num;
        contador++;
    }
    //promedio = (float)suma/contador;

    promedio=SacarPromedio(suma,contador);
    printf("\nEl promedio es: %d ",suma);
    printf("\nEl promedio es: %.2f\n",promedio);


    Saludar();

    return 0;
}

void Saludar(void)
{
    printf("Hola mundo C");
}

int DameNumero(void)
{
    int cantidad;
    printf("\nIngrese la cantidad de iteraciones: ");
    scanf("%d",&cantidad);
    return cantidad;
}

float SacarPromedio(int suma,int cantidad)
{
    float Promedio;
    Promedio = (float)suma/cantidad;
    return Promedio;
}

void esPrimo(int numero)
{

}
