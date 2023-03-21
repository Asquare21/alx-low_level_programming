#include "main.h"

/**
 * _isalpha - fuction that print both lower and upper case
 * @c: parameter to be checked
 *
 * Return: return 1 if is an alphabet or 0 other wise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
