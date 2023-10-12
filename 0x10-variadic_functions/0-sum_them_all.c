#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - faire la somme des n premiers argumments
 * @n: le nombre d'argument a spécifié
 * Return: the sum of these n argument
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, the_sum;

	if (n == 0)
		return (0);
	va_start(ap, n);

	the_sum = 0;

	for (i = 0; i < n; i++)
		the_sum += va_arg(ap, int);
	va_end(ap);
	return (the_sum);
}
