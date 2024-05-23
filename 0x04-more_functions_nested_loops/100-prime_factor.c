#include <stdio.h>

/**
 * _sqrt - finds the square root using the Babylonian method
 * @x: input number
 * Return: square root of x
*/

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - finds and prints the largest
 * prime factor of the number (num)
 * @num: number to find the largest prime factor of
*/

void largest_prime_factor(long int num)
{
	int prm, largest;

	while (num % 2 == 0)
	{
		num = num / 2;
		largest = 2;
	}

	for (prm = 3; prm <= _sqrt(num); prm += 2)
	{
		while (num % prm == 0)
		{
			num = num / prm;
			largest = prm;
		}
	}

	if (num > 2)
		largest = num;

	printf("%d\n", largest);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}
