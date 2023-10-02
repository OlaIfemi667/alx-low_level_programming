#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: nombre d'argument
 * @argv: tableau
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	int b;

	if (argc == 3)
	{
		a = atoi(argv[2]);
		b = atoi(argv[1]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
