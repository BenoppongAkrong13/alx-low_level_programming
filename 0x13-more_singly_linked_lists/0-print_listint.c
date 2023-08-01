#include "lists.h"

/**
 * print_listint - prints the elements of a linked list
 * @b: Llist of type listint_t to print
 *
 * Return: Number of Nodes
 */
size_t print_listint(const listint_t *b)
{
	size_t num = 0;

	while (b)
	{
		printf("%d\n", b->n);
		num++;
		b = b->next;
	}

	return (num);
}
