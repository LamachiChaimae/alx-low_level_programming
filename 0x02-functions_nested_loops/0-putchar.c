#include <unistd.h>
#include "main.h"

/**
 * _putchar -  write the caracter c
 * @c: the caracter to print
 * Return:  0 (success)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
