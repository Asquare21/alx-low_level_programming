#include <stdio.h>

/**
 * main - main function that print alphabeth without q and e
 * Return: return 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar(*"\n");
	return (0);
}
