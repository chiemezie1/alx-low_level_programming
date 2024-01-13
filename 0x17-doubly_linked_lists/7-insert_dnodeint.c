#include <stab.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: A pointer to the head of the list
 * @idx: The index of the list where the new node should be added
 * @n: The data to be stored in the new node
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new = NULL;
    dlistint_t *tmp = NULL;
    unsigned int node;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = NULL;
    new->prev = NULL;

    if (*h == NULL)
    {
        *h = new;
        return (new);
    }
    else if (idx == 0)
    {
        new->next = *h;
        (*h)->prev = new;
        *h = new;
        return (new);
    }
    else
    {
        tmp = *h;
        for (node = 0; node < idx; node++)
        {
            if (tmp == NULL)
                return (NULL);
            tmp = tmp->next;
        }
        if (tmp)
        {
            new->next = tmp;
            new->prev = tmp->prev;
            if (tmp->prev)
                tmp->prev->next = new;
            tmp->prev = new;
            return (new);
        }
    }
    return (NULL);
}
