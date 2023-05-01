#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *next = NULL;
	size_t count = 0;

	while (current)
	{
		count++;
		if (current < next)
		{
			*h = NULL;
			exit(98);
		}
		next = current->next;
		free(current);
		current = next;
	}

	*h = NULL;
	return (count);
}
