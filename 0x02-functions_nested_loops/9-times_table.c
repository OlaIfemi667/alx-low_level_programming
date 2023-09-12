#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i,j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i * j < 10)
			{
				_putchar('0' + i * j);
				_putchar(' ');
				_putchar(' ');
				if (j == 9)
					_putchar('\n');
				else
					_putchar(',');
			}
			else
			{
				_putchar('0' + (i * j) / 10);
				_putchar('0' + (i * j) % 10);
				_putchar(' ');
				if (j == 9)
					_putchar('\n');
				else
					_putchar(',');
			}
		}
	}
}
