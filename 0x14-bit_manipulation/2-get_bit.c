/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int number to get the bit from
 * @index: index of the bit to retrieve
 *
 * Return: the value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
