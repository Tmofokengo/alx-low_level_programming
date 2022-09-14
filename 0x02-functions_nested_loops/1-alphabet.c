#include "main.h"

/**
 * main - Entry point
 *
 * Description: "A function that prints the alphabets, in lowercase print a - z.
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
char  i = 97;
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}
