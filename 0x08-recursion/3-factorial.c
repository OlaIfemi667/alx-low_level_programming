#include "main.h"
#include <stdio.h>
/**
 * factorial - le factoriel quoi
 * @n: le nombre dont on veut le factorielle
 * Return: le factoriel
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
