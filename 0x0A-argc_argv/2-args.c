#include <stdio.h>

/**
 * main - this is the main function
 * Return: 0 for success
 * @argc : the parameter
 * @argv: parameter
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}
