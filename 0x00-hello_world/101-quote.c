#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *chai = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	int i = 0;

	while (chai[i] != '\0')
	{
		write(1, &chai[i], 1);
		i++;
	}
	return (1);
}

