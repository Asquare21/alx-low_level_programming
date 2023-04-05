#include "main.h"
/**
 * _strlen_recursion - show the length of string
 * @s: string to measure
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s)
	{
		lenght++;
		lenght += _strlen_recursion(s + 1);
	}
	return (lenght);
}
