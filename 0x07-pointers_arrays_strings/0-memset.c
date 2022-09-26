#include "main.h"

/**
 *_memset - files memory with a constant byte.
 *fills the first n bytes of  the memory area pointed to by s the constant b
 *@s: pointer to memory area
 *@b: constant to fill memory with
 *@n: bytes of te memory area to be filled.
 *
 *Return: Pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int counter;
for (counter = 0; counter < n; counter++)
{
s[counter] = b;
}
}
