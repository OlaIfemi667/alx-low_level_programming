#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - creer un tableau d'entier
 * @width: nombre de colonne
 * @height: ligne
 * Return: tableau
 */
int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width == 0 || height == 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
