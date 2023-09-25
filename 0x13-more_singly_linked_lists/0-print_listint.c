#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 *@h: constant pointer of type listint_t structure.
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	int size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}

	return (size);
}
