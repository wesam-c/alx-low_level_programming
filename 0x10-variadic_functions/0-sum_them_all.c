#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: the integers to sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;
	va_list nums;

	if (!n)
		return (0);
	va_start(nums, n);
	while (i--)
		sum += va_arg(nums, int);
	va_end(nums);
	return (sum);
}
