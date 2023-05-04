#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node in a linked list at a certain index
 * @head: pointer to the first element the list.
 * @index: index of the node to delete.
 * Return: 1 succeeded, -1 fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *temp;
    unsigned int i;

    if (*head == NULL) /* check if the list is empty */
        return (-1);

    if (index == 0) /* delete the head node */
    {
        temp = *head;
        *head = temp->next;
        free(temp);
        return (1);
    }

    current = *head;
    for (i = 0; current && i < index - 1; i++) /* find the node to delete */
        current = current->next;

    if (current == NULL || current->next == NULL) /* check if index is out of range */
        return (-1);

    temp = current->next;
    current->next = temp->next;
    free(temp); /* delete the node */
    return (1);
}
