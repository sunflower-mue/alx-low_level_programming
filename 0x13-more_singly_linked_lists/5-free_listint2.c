#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * function sets the head to NULL.
 * @head: A pointer to a pointer to head of LL.
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}
