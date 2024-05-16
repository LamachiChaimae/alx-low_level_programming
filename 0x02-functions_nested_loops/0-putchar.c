#include "main.h"

/**
 * main -  write the caracter c
 * Description: the caracter to print
 * Return:  0 (success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');
	return (0);
}
