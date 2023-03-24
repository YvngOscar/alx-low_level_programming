#include "main.h"

/**
 * print_line - this is the main function
 * @n: this is the main parameter
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1 ; i <= n ; i++)
			_putchar('_');
		_putchar('\n');
	}
}
