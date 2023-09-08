#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *alphabet = "0123456789abcdef";

	int i = 0;

	while (alphabet[i] != '\0')
	{
		putchar(alphabet[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
