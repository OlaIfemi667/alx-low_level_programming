#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creer un tableau
 * @size: taille
 * @c: caractere
 * Return: pointeur or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array_t;

	array_t = malloc(sizeof(char) * size);
	if (array_t == NULL || size == 0)
	{
		return (NULL);
	}

	else
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			array_t[i] = c;
		}
		return (array_t);
	}
}
