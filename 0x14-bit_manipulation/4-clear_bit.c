#include "main.h"

/**
 * clear_bit - set the value bit to 0
 * @a: pointer to the number
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1as error
 */
int clear_bit(unsigned long int *a, unsigned int index)
{
	if (index > 63)
		return (-1);

	*a = (~(1UL << index) & *a);
	return (1);
}
