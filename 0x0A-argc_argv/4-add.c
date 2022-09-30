#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints the addition of positive numbers
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 * Return: If one of the numbercontains symbols that are non-digits
 * -1 otherwise - 0
 */

int main(int argc, char *argv[])
{
int num, digit, sum = 0;
for (num = 1; num < argc; num++)
{
for (digit = 0; argv[num][digit]; digit++)
{
if (argv[num][digit] < '0' || argv[num][digit] > '9')
{
_putchar("Error\n");
return (1);
}
}
sum += atoi(argv[num]);
}
_putchar("%d\n", sum);
return (0);
}
