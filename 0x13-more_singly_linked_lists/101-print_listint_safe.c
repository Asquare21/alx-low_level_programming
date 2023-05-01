#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *prev = NULL;
	size_t count = 0;

	while (current)
	{
		printf("[%p] %d\n", (void *) current, current->n);
		count++;
		if (current < prev)
		{
			printf("-> [%p] %d\n", (void *) current->next, current->next->n);
			exit(98);
		}
		prev = current;
		current = current->next;
	}

	return (count);
}
