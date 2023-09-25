#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: Pointer to beginning of the list- first node.
 *
 * Return: Sum of all ints - if the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;

	}

	return (sum);
}
