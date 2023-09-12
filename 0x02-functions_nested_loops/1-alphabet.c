#include "main.h"

void print_alphabet(void)
{
	char *alpha = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	while (alpha[i] != '\0')
	{
		_putchar(alpha[i]);
		i++;
	}
	_putchar('\n');
}
