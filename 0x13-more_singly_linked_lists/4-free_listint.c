#include "lists.h"

/**
 * free_listint - frees a linked list to be free
 * @head: poiter direct to the listint_t list freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
