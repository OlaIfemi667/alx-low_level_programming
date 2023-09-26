#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Affiche un tableau d'échecs (8x8) en console.
 * @size: the size
 * @a: Le tableau d'échecs à afficher.
 */
void print_diagsums(int *a, int size)
{
	int somme1, somme2, y;

	somme1 = 0;
	somme2 = 0;
	for (y = 0; y < size; y++)
	{
		somme1 = somme1 + a[y * size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
		somme2 += a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
