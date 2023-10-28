#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: pointer (s)
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > 0; x++, n--)
	{
		s[x] = b;
	}

	return (s);
}
