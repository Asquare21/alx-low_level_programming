#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int number to be converted to binary and printed
 *
 * Return: no return value (void)
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int i = (sizeof(unsigned long int) * 8) - 1;

	while (i >= 0)
	{
		if (n >> i & mask)
			_putchar('1');
		else
			_putchar('0');
		i--;
	}
}
