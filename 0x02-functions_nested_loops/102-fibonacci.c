#include "main.h"

/**
 * main - Entry point
 * Description: prints the first 50 Fibonacci numbers
 * Return: Always (0) Success
*/

int main(void)
{
	int count;

	int long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%ld", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
