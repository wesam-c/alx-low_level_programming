#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: memory area
 * @src: sourse
 * @n: length of src to be copied
 * Return: the pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
