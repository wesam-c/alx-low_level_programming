#include <stdio.h>

/**
 * main - print num of arguments passed
 * @argc: num of commandline arguments
 * @argv: pointer to array of command arguments
 * Return: 0-success, non-zero-fall
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
