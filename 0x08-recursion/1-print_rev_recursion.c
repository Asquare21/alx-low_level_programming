#include "main.h"
/**
 * _print_rev_recursion - reverse the string
 * @s: the to print
 */

void _print_rev_recursion(char *s)
{
	if(*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
