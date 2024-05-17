#include "main.h"

/**
 * main - entry point
 * Description: finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always (0) Success
*/

int main(void)
{
	int long fib1 = 0, fib2 = 1, sum;
	int long total_sum;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total_sum += sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%ld\n", total_sum);
	return (0);
}
