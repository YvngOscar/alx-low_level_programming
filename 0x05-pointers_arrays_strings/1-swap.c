#include "main.h"

/**
 * swap_int - this is the main function
 * @a: the first parameter
 * @b: the second parameter
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
