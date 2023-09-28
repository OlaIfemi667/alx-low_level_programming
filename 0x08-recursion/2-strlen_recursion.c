#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion -  la taille de la chaine de caractère
 * @s: la chaine en question ou plutot le pointeur vers le premier caractere
 * Return: lenght
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
