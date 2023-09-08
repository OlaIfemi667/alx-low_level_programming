#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers[10], i, j, k, tmp_k, tmp_j;

	for (i = 0; i < 10; i++)
	{
		numbers[i] = i;
	}

	j = 1;
	k = 2;
	tmp_k = k - 1;
	tmp_j = j - 1;

	for (i = 0; i < 8; i++)
	{
		tmp_j++;
		j = tmp_j;
		while (j < 9)
		{
			tmp_k++;
			k = tmp_k;
			while (k < 10)
			{
				putchar('0' + numbers[i]);
				putchar('0' + numbers[j]);
				putchar('0' + numbers[k]);
				if (numbers[i] != 7)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
	}
	putchar('\n');
	return (0);
}
