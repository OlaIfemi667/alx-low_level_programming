#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyz";

	int i = 0;

	while (alphabet[i] != '\0')
	{
		if (alphabet[i] != 'q' && alphabet[i] != 'e')
			putchar(alphabet[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
