#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	char *mot = "_putchar";
	int i = 0;

	while (mot[i] != '\0')
	{
		putchar(mot[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
