#include "main.h"

/**
 * _strncpy - copie string
 * @dest: destination string
 * @src: source string
 * @n: num of string
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}
