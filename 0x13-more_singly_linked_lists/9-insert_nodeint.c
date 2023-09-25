#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to head of LL.
 * @idx: index of the list where the new node should be added. Index starts at0
 * @n: int to add in list.
 * Return: the address of the new node, or NULL if it failed.
 * if it is not possible to add the new node at index idx,...
 * ... do not add the new node and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/*If no linked lis- NUll*/
	if (head == NULL)
		return (NULL);

	listint_t *new_node = malloc(sizeof(listint_t));
	/*if failed to malloc*/
	while (!new_node)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		/*point to were head points*/
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	listint_t *current = *head;
	unsigned int i;

	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = currerent->next;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);

}
