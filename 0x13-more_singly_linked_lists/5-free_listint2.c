#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * function sets the head to NULL.
 * @head: A pointer to a pointer to head of LL.
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *tmp;

	while (current)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}

	*head = NULL;
}
