#include "main.h"

/**
 * _isdigit - this is the main function
 * @c: this is a parameter
 * Return:1 if is digit and 0 if is not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
