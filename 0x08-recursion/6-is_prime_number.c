#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int number_de_diviseur(int n, int i, int compteur);

/**
 * is_prime_number - nombre premier
 * @n: nombre a verifier
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n > 1)
	{
		if (number_de_diviseur(n, 1, 0) == 2)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (0);
	}
}

/**
 * number_de_diviseur - nombre de diviseur
 * @n: le nombre
 * @i: iterator
 * @compteur: compter
 * Return: compteur
 */

int number_de_diviseur(int n, int i, int compteur)
{
	if (i <= n)
	{
		if (n % i == 0)
			compteur += 1;
		compteur = number_de_diviseur(n, i + 1, compteur);
	}
	return (compteur);
}
