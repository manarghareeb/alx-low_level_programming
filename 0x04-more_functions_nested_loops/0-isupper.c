#include "main.h"

/**
 * _isupper - Checks if a letter is upper
 * @x: The number to be Checked
 * Return: 1 for upper letter or 0 for any else
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
		return (1);
	else
		return (0);
}
