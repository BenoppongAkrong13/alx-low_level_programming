#include "main.h"

/**
 * get_endianness - checks how small or big endian
 *of a machine
 * Return: 0 for big, 1 for small
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
