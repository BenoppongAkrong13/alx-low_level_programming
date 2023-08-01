#include "lists.h"

/**
 * pop_listint - Deletes head node of linked list
 * @head: Pointer of the first element in the linked list
 *
 * Return:0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
