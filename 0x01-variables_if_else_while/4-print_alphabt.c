/*
 *File:4-print_alphabt.c
 *Auth: Teboho Mofokeng
 */
#include <stdio.h>
/**
 *main - Prints the alphaet in lowercase, except for q and e.
 *
 *Retun: Always 0.
 */

int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
putchar(letter);
}
putchar('\n');
return (0);
}
