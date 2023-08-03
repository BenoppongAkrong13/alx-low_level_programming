#include "main.h"

/**
 * binary_to_uint - Converts  binary to unsigned int
 * @w: String contains the binary number
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *w)
{
	int i;
	unsigned int dec_val = 0;

	if (!w)
		return (0);

	for (i = 0; w[i]; i++)
	{
		if (w[i] < '0' || w[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (w[i] - '0');
	}

	return (dec_val);
}
