#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromText(FILE* pFile , LinkedList* pArrayListEmployee)
{
    Employee* auxEmployee=employee_new();
    int r;
    int i=0;
    char idAux[50],nombreAux[50],horasTrabajadasAux[50],sueldoAux[50];

    r=fscanf(pFile,"%[^,],%[^,],%[^,],%[^,\n]\n",idAux,nombreAux,horasTrabajadasAux,sueldoAux);
    while(!feof(pFile))
    {
        r=fscanf(pFile,"%[^,],%[^,],%[^,],%[^,\n]\n",idAux,nombreAux,horasTrabajadasAux,sueldoAux);
        if(r==4)
        {
            auxEmployee=employee_newParametros(idAux,nombreAux,horasTrabajadasAux,sueldoAux);
            ll_add(pArrayListEmployee,auxEmployee);
            i++;
        }
    }
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee)
{

    return 1;
}
