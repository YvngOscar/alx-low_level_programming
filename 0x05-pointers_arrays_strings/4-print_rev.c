#include "main.h"

/**
 * print_rev - this is the main function
 * @s: parameter
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
