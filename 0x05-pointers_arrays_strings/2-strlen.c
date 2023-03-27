#include "main.h"
/**
 * _strlen - return string
 * @s: string whose length to be print
 * Return: lenght of the string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
