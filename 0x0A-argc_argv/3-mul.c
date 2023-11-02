#include <stdio.h>

/**
 * main - print sum of 2 nums
 * @argc: num of commandline arguments
 * @argv: pointer to array of command arguments
 * Return: 0-success, non-zero-fall
*/

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
