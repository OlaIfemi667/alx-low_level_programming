#include <stdio.h>

/**
 * main - main function
 * @argc: nombre d'argument
 * @argv: tableau
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d\n", argv[0] * argv[1]);
	}
	else
	{
		printf("Error\n");
	return (0);
}
