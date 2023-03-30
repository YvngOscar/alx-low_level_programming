#include "main.h"

/**
 * _strncat - concatenates 2 strings
 * @dest: ther destinationa
 * @src: string to be concanated
 * @n:characters from src
 * Return:the dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen++;
	for (i = 0 ; src[i] != '\0' ; i++)
		srclen++;
	for (i = 0 ; src[i] && i < n ; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
