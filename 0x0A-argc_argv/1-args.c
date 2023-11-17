#include <stdio.h>

/**
 * main - main function
 * @argc: nombre d'argument
 * @argv: tableau
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = argv[0];
	return (0);
}
