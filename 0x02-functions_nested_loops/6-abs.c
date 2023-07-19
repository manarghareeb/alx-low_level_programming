#include "main.h"

/**
 * _abs - Computers the absolute value of an integer
 * @c: The number is be checks
 * Return: Absolute value of the number or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
