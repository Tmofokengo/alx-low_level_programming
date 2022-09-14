#include "main.h"
/**
 * print_sign: Prints the sign of a number
* Description: Check if number is - equal of +
* @n: check value if its - + or =
 * Return: 1 and print + if n greater than 0
 * 0 and print 0 if n is equal to 0
 * -1 and print - if n is less than 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else if (n < 0)
{
_putchar(45);
}
return (-1);
}
