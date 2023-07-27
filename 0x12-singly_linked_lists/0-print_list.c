#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints the elements of a linked list
 * @r: pointer to the list_t list to print
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
 size_t p = 0;

 while (r)
 {
 if (!r->str)
 printf("[0] (nil)\n");
 else
 printf("[%u] %s\n", r->len, r->str);
 r = r->next;
 p++;
 }

 return (p);
}
