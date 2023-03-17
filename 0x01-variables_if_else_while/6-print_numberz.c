#include <stdio.h>

/**
 * main - main funtion print all single number of base 10
 *
 * Return: is always 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar(*"\n");
	return (0);
}
