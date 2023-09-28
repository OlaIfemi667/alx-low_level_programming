#include "main.h"
#include <stdio.h>
int n_equal_to_i_square(int n, int i);
/**
 * _sqrt_recursion - racine carre
 * @n: le nombre dont on veut une racine carrée
 * Return: la racine carre si elle existe sinon -1
 */
int _sqrt_recursion(int n)
{
	if (n >= 0)
	{
		return (n_equal_to_i_square(n, 0));
	}
	return (-1);
}

/**
 * n_equal_to_i_square - verify if n = i^2
 * @n: you know
 * @i: iterator
 * Return: n
 */

int n_equal_to_i_square(int n, int i)
{
	if (n == i * i)
	{
		return (i);
	}
	if (n < i * i)
	{
		return (-1);
	}
	return (n_equal_to_i_square(n, i + 1));

}
