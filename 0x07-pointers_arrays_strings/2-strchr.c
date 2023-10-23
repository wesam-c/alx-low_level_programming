#include "main.h"

/**
 * _strchr - function that fills memory with a constant byte
 * @s: pointer to put the constant
 * @c: constant
 * Return: pointer (s)
*/

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}

	return ('\0');
}
