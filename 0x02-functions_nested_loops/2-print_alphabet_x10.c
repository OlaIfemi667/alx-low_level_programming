#include "main.h"
/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0.
 *
 */
void  print_alphabet_x10(void)
{
	char *alpha = "abcdefghijklmnopqrstuvwxyz";
	int i, l;

	for (i = 0; i < 10; i++)
	{
		l = 0;
		while (alpha[l] != '\0')
		{
			_putchar(alpha[l]);
			l++;
		}
		_putchar('\n');
	}
}
