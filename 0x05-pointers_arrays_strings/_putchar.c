#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to be print
 *
 * Return: in success 1 on error, -1, and is set appropriately
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
