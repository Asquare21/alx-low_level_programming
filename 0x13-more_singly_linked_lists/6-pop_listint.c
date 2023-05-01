#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list and return its data
 * @head: pointer to the head in the linked list
 *
 * Return: the data inside the data that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
