#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: Constant pointer of type listint_t to next node.
 *
 * Return: size_t type number of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}

	return (size);
}
