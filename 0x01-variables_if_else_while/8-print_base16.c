#include <stdio.h>

/**
 * main - main function printing base 16
 *
 * Return: zero
 */

int main(void)
{
	char j;
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar(*"\n");
	return (0);
}
