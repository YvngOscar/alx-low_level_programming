#include "main.h"

/**
 * _abs - this is the main function
 *
 * @a: this is the parameter
 *
 * Return: always 0
 *
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	if (a >= 0)
		a = a;
	return (a);
}
