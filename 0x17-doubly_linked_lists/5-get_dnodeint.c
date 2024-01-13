#include <stab.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: A pointer to the head of the list
 * @index: The index of the node to be returned
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the nth node of the list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int node;
    dlistint_t *current;

    if (head == NULL)
        return (NULL);

    current = head;
    for (node = 0; node < index; node++)
    {
        if (current->next == NULL)
            return (NULL);
        current = current->next;
    }
    return (current);
}
