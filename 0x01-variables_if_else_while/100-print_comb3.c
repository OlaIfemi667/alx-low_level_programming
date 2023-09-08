#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers[10], i, j;

	for (i = 0; i < 10; i++)
	{
		numbers[i] = i;
	}

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar('0' + numbers[i]);
			putchar('0' + numbers[j]);
			if(numbers[i] != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
