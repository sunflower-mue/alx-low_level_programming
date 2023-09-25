#include "list.h"

/**
 * free_listint - frees a listint_t list;
 * @head: pointer to the start of LL.
 *
 * Return: NOthing.
 */

free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;

	}
}
