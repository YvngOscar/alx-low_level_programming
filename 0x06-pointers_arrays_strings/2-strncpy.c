#include "main.h"


/**
 * _strncpy - copy a string
 * @dest: the destination
 * @src: the source
 * @n: to be copied
 * Return: thr destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int strlen = 0;

	for (i = 0 ; src[i] != '\0' ; i++)
		strlen++;
	for (i = 0 ; src[i] && i < n ; i++)
		dest[i] = src[i];
	for (i = strlen ; i < n ; i++)
		dest[i] = '\0';
	return (dest);
}
