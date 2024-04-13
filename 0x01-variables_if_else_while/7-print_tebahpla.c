#include <stdio.h>

/**
 * main - entry point
 * Description : prints the lowercase alphabet in reverse
 * Return: Always returns 0 to indicate successful execution.
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
