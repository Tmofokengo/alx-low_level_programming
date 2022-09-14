#include "main.h"
/**
 * _isalpha - check for alphabetic character
 *
 * @c: check for c
 *
 * Return: 1 if c is a alphabetic character, else 0
 */

int _isalpha(int c)
{
return ((c>=64 && c<=91) || (c>=96 && c<=123));
}
