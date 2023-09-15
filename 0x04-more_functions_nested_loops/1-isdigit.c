#include "main.h"

/**
* _isdigit - tests function that prints if integer is positive or negative
* @c: position digit
* Return: 0
*/
int _isdigit(int c)
{
	if(c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
