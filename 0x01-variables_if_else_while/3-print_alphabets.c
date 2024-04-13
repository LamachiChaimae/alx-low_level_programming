#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * followed by a new line.
 * Return: Always returns 0 to indicate successful execution.
*/

int main(void)
{

	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
