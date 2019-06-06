#include "parser.h"
#include "stdio.h"
#include <stdlib.h>
#include <string.h>

Employee* employee_new()
{
    Employee* pEmployee;
    pEmployee= (Employee)calloc(sizeof(Employee),1)
    return pEmployee;
}
Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr, char* sueldoStr)
{
    Employee* auxiliarEmpleado = employee_new()
    if(auxiliarEmpleado!=NULL)
    {
        int id= atoi(idStr);
        int horasTrabajo= atoi(horasTrabajadasStr);
        int sueldo= atoi(sueldoStr);
    }
}




