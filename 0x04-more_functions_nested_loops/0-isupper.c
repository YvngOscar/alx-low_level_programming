#include "main.h"

/**
 * _isupper - this is the main function
 * @c: this is a parameter
 * Return: 1 when upper & 0 when lower
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
