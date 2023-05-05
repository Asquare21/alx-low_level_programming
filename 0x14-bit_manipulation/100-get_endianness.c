#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int d = 1;
	char *c = (char *) &d;

	if (*c)
		return (1); /* little endian */
	else
		return (0); /* big endian */
}
