#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - find index
 * @array: le tableau
 * @size: la taille
 * @cmp: la fonction
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for  (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);
	}
	return (-1);
}
