#include "main.h"

/**
 * _isdigit - checks for a digit between 0 - 9
 * @c: input
 * Return: 1 if is digit, 0 is not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
