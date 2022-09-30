#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Program that takes first two interger arguments and prints
 * the product
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if not enough arguments passe in, 0 otherwise
 */

int main(int argc, char *argv[])
{
int i, j;
if (argc == 1 || argc == 2)
{
_putchar("Error\n");
return (1);
}
else
{
j = 1;
for (i = 1; i < 3; i++)
j *= atoi(argv[i]);
_putchar("%d\n", j);
}
return (0);
}
