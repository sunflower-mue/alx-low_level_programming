#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of ll.
 * @head: double pointer to head of ll.
 * @index: index of node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = NULL;
	listint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (i < index - 1)
	{
		if (!current || !(current->next))
			return (-1);

		current = current->next;
		i++;
	}

	tmp = current->next;
	current->next = tmp->next;
	free(tmp);

	return (1);
}
