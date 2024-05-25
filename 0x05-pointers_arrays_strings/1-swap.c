#include "main.h"

/**
 * swap_int - prints swaps the values of two integers.
 * @a: pointer the first value
 * @b: pointer the second value
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
