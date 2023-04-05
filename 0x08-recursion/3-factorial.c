#include "main.h"
/**
 * factorial - bring the factorial num
 * @n: num to return factorial to
 * Return: factorialof n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
