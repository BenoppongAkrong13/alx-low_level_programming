#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: element of move and stay
 *
 * Return: NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *move = head;
	listint_t *stay = head;

	if (!head)
		return (NULL);

	while (move && stay && stay->next)
	{
		stay = stay->next->next;
		move = move->next;
		if (stay == move)
		{
			move = head;
			while (move != stay)
			{
				move = move->next;
				stay = stay->next;
			}
			return (stay);
		}
	}

	return (NULL);
}
