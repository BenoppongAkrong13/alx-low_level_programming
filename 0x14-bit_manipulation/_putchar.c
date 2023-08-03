#include "main.h"
#include <unistd.h>
/**
 * _putchar - Write the Character c to standard output
 * @c: Char to print
 *
 * Return: Success 1.
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
