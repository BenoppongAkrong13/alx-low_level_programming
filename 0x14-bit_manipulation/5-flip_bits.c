#include "main.h"

/**
 * flip_bits - counts num of bits to change
 * @a: num1
 * @p: num2
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int a, unsigned long int p)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = a ^ p;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
