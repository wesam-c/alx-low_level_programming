#include "main.h"

/**
* print_last_dgt - prints the last dgt
*
* @n: the number
*
* Return: value of the last dgt
*/

int print_last_dgt(int n)
{
	int ld;

	if (n < 0)
		ld = -1 * (n % 10);
	else
		ld = n % 10;
	_putchar(ls + 48);
	return (ls);
}
