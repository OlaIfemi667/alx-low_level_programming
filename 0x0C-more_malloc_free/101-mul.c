#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _pow - puissance
 * @base: la base
 * @exponent: lexposant
 * Return: puissance de la base
 */
int _pow(int base, int exponent)
{
	int i, result = 1;

	for (i = 0; i < exponent; ++i)
	{
		result *= base;
	}
	return (result);
}

/**
 * print_number - prints an integer;
 * @n: integer to be printed;
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	} else
	{
		n1 = n;
	}

	if (n1 / 10)
		print_number(n1 / 10);

	_putchar((n1 % 10) + '0');
}

/**
 * is_digit - est entier
 * @n: le nombre
 * Return: 0 ou 1
 */

int is_digit(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] < '0' || n[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * char_to_digit - convertir de string a digit
 * @c: le string
 * Return: le digit
 */
int char_to_digit(char *c)
{
	int taille = strlen(c), i, le_digit = 0, puissance = taille - 1;

	for (i = 0; i < taille; i++)
	{
		le_digit += (c[i] - '0') * _pow(10, puissance);
		puissance--;
	}
	return (le_digit);
}

/**
 * main - multiplie deux arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int resultat;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (is_digit(argv[1]) != 1 || is_digit(argv[2]) != 1)
	{
		printf("Error\n");
		exit(98);
	}

	resultat = char_to_digit(argv[1]) * char_to_digit(argv[2]);
	print_number(resultat);
	_putchar('\n');
	return (0);
}
