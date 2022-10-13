#include "function_pointers.h"



/**
* int_index - Searches for an interger
* @array: array to search
*  @size: array size
*  @cmp: compare
*
*  Return: -1 if no element and return -1 if less than 0 else return 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (size > 0)
{
if (array != NULL && cmp != NULL)
{
while (i < size)
{
if (cmp(array[i]))
return (i);
i++;
}
}
}
return (-1);
}
