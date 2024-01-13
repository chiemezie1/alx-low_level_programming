#include <stab.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a list
 * @head: A pointer to the head of the list
 * @index: The index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *tmp = NULL;
    dlistint_t *current = NULL;
    unsigned int node;

    if (*head == NULL)
        return (-1);

    current = *head;
    if (index == 0)
    {
        *head = current->next;
        if (current->next != NULL)
            current->next->prev = NULL;
        free(current);
        return (1);
    }
    for (node = 0; node < index; node++)
    {
        if (current->next == NULL)
            return (-1);
        current = current->next;
    }
    tmp = current->prev;
    tmp->next = current->next;
    if (current->next != NULL)
        current->next->prev = tmp;
    free(current);
    return (1);
}
