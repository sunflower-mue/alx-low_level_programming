#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: Double pointer to head of list.
 *
 * Return: 0 if NULL, dats(n) of head you deleted.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (n);
}
