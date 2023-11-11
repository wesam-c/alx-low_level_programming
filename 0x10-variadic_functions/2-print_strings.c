#include "variadic_functions.h"

/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: the string separator
 * @n: The number of paramters passed to the function.
 * @...: the integers to print
 *
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)";
				i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
