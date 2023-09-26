#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to a pointer to head of ll.
 *
 * Return: Pointer to firat node of reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current)
	{
		listint_t *next_node = current->next;

		current->next = prev;

		prev = current;
		current = next_node;
	}

	*head = prev;

	return (prev);
}
