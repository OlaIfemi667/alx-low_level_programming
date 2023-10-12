#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main
 * @argc: nombre argument
 * @argv: tableau d'argument
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int a = atoi(argv[1]), b = atoi(argv[3]);
	char *oper = argv[2];

	if(argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (b == 0 && (*oper == '/' || *oper == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*get_op_func(argv[2]))(a, b));
	return (0);
}
