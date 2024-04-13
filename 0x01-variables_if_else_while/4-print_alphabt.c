#include <stdio.h>

/**
 * main - entry point
 * Description :  prints the alphabet in lowercase.
 * Return: Always returns 0 to indicate successful execution.
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
