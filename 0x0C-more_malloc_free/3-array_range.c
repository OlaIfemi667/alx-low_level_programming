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
	int i, j = 0, taille;
	int *p;

	if (min > max)
		return (NULL);
	taille = min + max + 1;
	p = malloc(sizeof(int) * taille);

	if (p == NULL)
		return (NULL);

	for (i = min; i <= taille; i++)
	{
		p[j] = i;
		j++;
	}
	return (p);
}
