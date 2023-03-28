#include "main.h"

/**
 * _strlen - this is the main function
 * @s: the main parameter
 * Return: returns the length
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
