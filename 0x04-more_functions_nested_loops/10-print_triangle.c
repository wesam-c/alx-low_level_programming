#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 *
 * @size: size of triangle
 *
 * return: 0 (success)
*/

void print_triangle(int size)
{
	int hght, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (hght = 1; hght <= size; hght++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((hght + base) <= size)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
