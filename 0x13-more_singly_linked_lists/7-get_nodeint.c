#include "lists.h"

/**
 * get_nodeint_at_index - Returns a node to a  certain index in a linked list
 * @head: node in the linked list
 * @index: index of the node
 *
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p = 0;
	listint_t *temp = head;

	while (temp && p < index)
	{
		temp = temp->next;
		p++;
	}

	return (temp ? temp : NULL);
}
