#include <unistd.h>
#include "main.h"

/**
 * main = A function that prints the alphbets, in lowercase.
 *
 * Return: Always 0.
 */

void print_alphabet(void);
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
