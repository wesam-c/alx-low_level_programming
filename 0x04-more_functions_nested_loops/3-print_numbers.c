#include "main.h"

/**
 * print_numbers - function prints numbers from 0-9
 *		followed by a new line
 *		only use _putchar twice
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9)
	_putchar('\n');
	return (0);
}
