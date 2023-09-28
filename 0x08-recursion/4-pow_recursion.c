#include "main.h"
#include <stdlib.h>
/**
 * _pow_recursion - puissance
 * @x: entier
 * @y: la puissance
 * Return: x a la puissance y
 */
int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
		{
			return (1);
		}
		else
		{
			return (x * _pow_recursion(x, y - 1));
		}
	}
	return (-1);
}
