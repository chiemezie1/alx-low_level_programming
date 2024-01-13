#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list
 * @head: The head of the doubly linked list
 * @n: The number or value to be placed in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new = NULL;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return NULL;

    new->n = n;

    if (*head)
    {
        while ((*head)->next != NULL)
            *head = (*head)->next;

        (*head)->next = new;
        new->prev = *head;
        return (*head);
    }

    if (*head == NULL)
    {
        *head = new;
        new->next = NULL;
        new->prev = NULL;
        return (*head);
    }

    return NULL;
}
