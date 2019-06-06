#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/


int main()
{

    int option = 0;

    LinkedList* listaEmpleados = ll_newLinkedList();

    printf(" 1. Cargar datos desde archivos(modo texto)  \n 2. Cargar datos desde archivos(modo binario)  \n 3. ALTA\n 4. MODIFICACION\n 5. BAJA\n 6. LISTAR\n 7. ORDENAR\n 8. Ordenar datos desde archivos(modo texto)\n 9. Ordenar datos desde archivos(modo binario)\n 10. SALIR\n" );
    scanf("%d", &option);

    do{
        switch(option)
        {
            case 1:
                controller_loadFromText("data.csv",listaEmpleados);
                system("pause");
                break;
            case 2:
                controller_loadFromBinary("data.dat",listaEmpleados);
                break;
            case 3:
                controller_addEmployee(listaEmpleados);
                break;
            case 4:
                controller_editEmployee(listaEmpleados);
                break;
            case 5:
                controller_removeEmployee(listaEmpleados);
                break;
            case 6:
                controller_ListEmployee(listaEmpleados);
                system("pause");
                break;
            case 7:
                controller_sortEmployee(listaEmpleados);
                break;
            case 8:
                controller_saveAsText("data.csv",listaEmpleados);
                break;
            case 9:
                controller_saveAsBinary("data.csv",listaEmpleados);
                break;


        }
        system("cls");
    }
    while(option != 10);
    return 0;
}
