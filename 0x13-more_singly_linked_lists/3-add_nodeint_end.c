#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to the head of LL.
 * @n: integer value to add.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t new_node, temp;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	/*Initialize new node*/
	new_node->n = n;
	new_node->next = NULL;

	/*Empty LL, set new_node as head*/

	if (*head == NULL)
		*head = new_node;
		return (new_node);
	/*Not Empty -Traverse*/
	*temp = *head;

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = new_node;

	return (new_node);
}

