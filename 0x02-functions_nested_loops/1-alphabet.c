#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: "A function that prints the alphabets, in lowercase print
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
char  i;
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}
