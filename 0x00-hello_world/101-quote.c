#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *lachaine = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	int i = 0;

	while (lachaine[i] != '\0')
	{
		write(1, &lachaine[i], 1);
		i++;
	}
	return (1);
}

