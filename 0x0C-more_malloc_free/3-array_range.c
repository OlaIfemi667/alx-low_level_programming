#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - array range
 * @min: minimum
 * @max: maximum
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int i, *p;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (min + max + 1));

	if (p == NULL)
		return (NULL);

	for (i = 1; i <= (min + max + 1); i++)
	{
		p[i - 1] = i - 1;
	}

	return (p);
}
