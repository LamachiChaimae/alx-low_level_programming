#include <stdio.h>

/**
 * main - entry point
 * Description : prints all possible combinations of two two-digit numbers.
 * Return: Always returns 0 to indicate successful execution.
*/

int main(void)
{
	int fDigit = 0, sDigit;

	while (fDigit <= 99)
	{
		sDigit = fDigit;
		while (sDigit <= 99)
		{
			if (sDigit != fDigit)
			{
				putchar((fDigit / 10) + 48);
				putchar((fDigit % 10) + 48);
				putchar(' ');
				putchar((sDigit / 10) + 48);
				putchar((sDigit % 10) + 48);

				if (fDigit != 98 || sDigit != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			sDigit++;
		}
		fDigit++;
	}
	putchar('\n');
	return (0);
}
