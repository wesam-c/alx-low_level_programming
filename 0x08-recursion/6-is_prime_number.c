#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0
 * @o: int
 * @n: int
 * Return: 0 or 1
*/

int check_prime(int n, int o);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime -check all nums < n if can divide it
 * @o: int
 * @n: int
 * Return: int
*/

int check_prime(int n, int o)
{
	if (o >= n && n > 1)
		return (1);
	else if (n % o == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, o + 1));
}
