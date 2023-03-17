#include <stdio.h>

/**
 * main -main fuctions that displat alphabeth in lower and upper case
 * Return: is close 0
 */
int main(void)
{
	char i;
	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar(*"\n");
	return (0);
}
