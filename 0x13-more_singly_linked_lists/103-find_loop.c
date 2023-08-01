#include "lists.h"

/**
 * free_listint_safe - to free a linked list
 * @b: pointer to the first element in the linked list
 *
 * Return: numbers  in the free_listint_safe
 */
size_t free_listint_safe(listint_t **b)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!b || !*b)
		return (0);

	while (*b)
	{
		diff = *b - (*b)->next;
		if (diff > 0)
		{
			temp = (*b)->next;
			free(*b);
			*b = temp;
			len++;
		}
		else
		{
			free(*b);
			*b = NULL;
			len++;
			break;
		}
	}

	*b = NULL;

	return (len);
}
