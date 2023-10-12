#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main
 * @argc: nombre argument
 * @argv: tableau d'argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int a = atoi(argv[1]), b = atoi(argv[3]);
		char *oper = argv[2];

		if (get_op_func(argv[2]) != NULL)
		{
			if (b == 0 && (*oper == '/' || *oper == '%'))
			{
				printf("Error\n");
				exit(100);
			}
			else
			{
				printf("%d\n", (*get_op_func(argv[2]))(a, b));
				return (0);
			}
		}
		else
		{
			printf("Error\n");
			exit(99);
		}
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
