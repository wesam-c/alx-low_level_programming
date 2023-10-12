#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: num of time _ shd be printed
*/

void print_line(int n)
{
	int lnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; lnChr++)
			_putchar('_');
		_putchar('\n');
	}
}
