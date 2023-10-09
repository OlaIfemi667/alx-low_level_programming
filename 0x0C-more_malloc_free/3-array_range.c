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
	int i, taille;
	int *p;

	if (min > max)
		return (NULL);
	
	taille = min + max + 1;
	
	p = malloc(sizeof(int) * taille);

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
