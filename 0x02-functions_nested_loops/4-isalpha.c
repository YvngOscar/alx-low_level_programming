#include "main.h"

/**
 * _isalpha - this is the main function
 *
 * @c: this is the parameter
 *
 * Return: always 0
 *
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
