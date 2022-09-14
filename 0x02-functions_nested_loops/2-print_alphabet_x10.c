#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * 
 * Description: A function that print 10 times the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
char letter;
int i;
i = 0;
while (i < 10)
{
letter = 97;
while (letter <= 122)
{
_putchar(letter);
letter++;
}
_putchar('\n');
i++;
}
}  
