#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node of a listint_t linked list.
 * @head: first head node of the linked list.
 * @index: The index of the node to return.
 *
 * Return: NULL or
 *         a pointer to the indexed node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}

	return (NULL);
}
