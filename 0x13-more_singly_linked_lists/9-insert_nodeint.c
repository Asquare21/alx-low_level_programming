#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node in a linked list
 * @head: Pointer to a pointer to the first node in the list.
 * @idx: Index where the new node should be added.
 * @n: data to insert in the new node
 *
 * Return: Pointer to the new node, or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp = *head;
	unsigned int i;

	if (idx == 0)
		return (add_nodeint(head, n));

	for (i = 0; i < idx - 1; i++)
	{
		if (tmp == NULL)
			return (NULL);

		tmp = tmp->next;
	}

	if (tmp == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
