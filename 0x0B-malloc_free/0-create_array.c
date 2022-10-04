#include "main.h"

/**
 * create_array - creates an array of chars, and
 * iniitializes it with a specific char.
 * @size: Size of Array
 * @c: Character to insert
 * Return: NULL if size is zero or if it fails,
 * pointer to array if all is okay
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int index;
if (size == 0)
return (NULL);
array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
for (index = 0; index < size; index++)
array[index] = c;
return (array);
}
