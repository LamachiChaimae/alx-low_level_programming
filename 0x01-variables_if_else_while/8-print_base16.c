#include <stdio.h>

/**
 * main - entry point
 * Description : prints all the numbers of base 16 in lowercase
 * Return: Always returns 0 to indicate successful execution.
*/

int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		putchar(digit);
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');
	return (0);
}
