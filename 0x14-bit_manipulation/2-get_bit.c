#include "main.h"

/**
 * get_bit - returns value of bit at an index in decimal number
 * @a: index to search
 * @index: index of the bit
 *
 * Return: value in  bit
 */
int get_bit(unsigned long int a, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (a >> index) & 1;

	return (bit_val);
}
