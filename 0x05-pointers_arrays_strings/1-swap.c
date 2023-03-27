#include "main.h"
/**
 * swap_int - swap int a to b
 * @a: - int 1
 * @b: - int 2
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
