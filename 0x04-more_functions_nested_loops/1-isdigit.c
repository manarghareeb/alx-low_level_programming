#include "main.h"

/**
 * _isdigit - Checks if a caracter is a digit
 * @x: The number to be checks
 * Return: 1 for a character that will be a digit or 0 for any else
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
		return (1);
	else
		return (0);
}
