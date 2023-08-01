#include "lists.h"

/**
 * listint_len - returns the number of elements of the linked lists
 * @b: linked list of type listint_t
 *
 * Return: Always 0.
 */
size_t listint_len(const listint_t *b)
{
	size_t num = 0;

	while (b)
	{
		num++;
		b = b->next;
	}

	return (num);
}
