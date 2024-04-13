#include <stdio.h>

/**
 * main - entry point
 * Description : prints all possible combinations of single-digit numbers.
 * Return: Always returns 0 to indicate successful execution.
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');
	return (0);
}
