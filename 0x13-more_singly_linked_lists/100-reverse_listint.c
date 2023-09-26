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
	listint_t *next_node = NULL;

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next_node;
	}

	*head = prev;

	return (*head);
}
