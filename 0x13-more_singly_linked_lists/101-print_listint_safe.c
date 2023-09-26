#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to value of head node.
 *
 * Return: number of nodes in the list. 98 if function fails.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *back = head;
	const listint_t *front = head;
	size_t node_count = 0;

	if (!head)
	{
		exit(98);
	}

	while (back && front && (front->next))
	{
		printf("[%p] %d\n", (void *)back, back->n);
		node_count++;

		back = back->next;
		front = front->next->next;

		if (back == front)
		{
			printf("-> [%p] %d\n", (void *)back->next, back->next->n);
			node_count++;
			exit(98);
		}
	}
	return (node_count);
}
