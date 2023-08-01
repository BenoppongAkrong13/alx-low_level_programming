#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of nodes
 * @head: A pointer to the head to access.
 *
 * Return:  loop - 0.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *kwame, *emma;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	kwame = head->next;
	emma = (head->next)->next;

	while (emma)
	{
		if (kwame == emma)
		{
			kwame = head;
			while (kwame != emma)
			{
				nodes++;
				kwame = kwame->next;
				emma = emma->next;
			}

			kwame = emma->next;
			while (kwame != emma)
			{
				nodes++;
				emma = kwame->next;
			}

			return (nodes);
		}

		kwame = emma->next;
		emma = (emma->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list
 * @head: A pointer to the head of the ptint_listint_t list.
 *
 * Return: Number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
