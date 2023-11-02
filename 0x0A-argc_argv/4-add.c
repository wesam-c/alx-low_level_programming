#include <stdio.h>

/**
 * main - it all start here
 * @argc: num of arguments
 * @argv: array of pointers to arguments
 *
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
