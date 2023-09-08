#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers[10], i;
	for (i = 0; i < 10; i++)
	{
		numbers[i]=i;
	}

	for (i = 0; i < 10; i++)
	{
		putchar('0'+numbers[i]);
	}
	putchar('\n');
	return (0);
}
