#include "main.h"
/**
 * _islower - check if a letter is lowercase
 * c is the int correspondance of the char in ascii table
 * Return: 0 if lowercase and 1 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
