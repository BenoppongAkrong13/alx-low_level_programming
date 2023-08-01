#include "lists.h"

/**
 * sum_listint - Calculating sum of the datas in a listint_t list
 * @head: begin with a node in the linked list
 *
 * Return: return 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
