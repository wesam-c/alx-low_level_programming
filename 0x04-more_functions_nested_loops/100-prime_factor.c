#include <stdio.h>

/**
 * _sqrt - finds square root
 *
 * @x: input num
 *
 * return: square root of x
*/

doube _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - of num
 *
 * @num: number to find
*/

void largest_prime_factor(long int num)
{
	int prmNu, largest;

	/* firstly divid with the smallest prime num (two)*/
	while (num % 2 == 0)
		num = num / 2;

	/* num must be odd so we proceed to next prime num (plus two)*/
	for (prmNu = 3; prmNu <= sqrt(num); prmNu += 2)
	{
		while (num % prmNu == 0)
		{
			num = num / prmNu;
			largest = prmNu;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - entry poiny
 *
 * Return: 0 (success)
*/

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
