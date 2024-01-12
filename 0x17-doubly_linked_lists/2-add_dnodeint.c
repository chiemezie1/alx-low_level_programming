#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: The head of the doubly linked list
 * @n: The number or value to be placed in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new = NULL;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        return (NULL);
    }

    new->n = n;
    if (*head)
    {
        new->next = *head;
        new->prev = NULL;
        (*head)->prev = new;
        *head = new;
        return (*head);
    }

    new->next = *head;
    new->prev = NULL;
    *head = new;
    return (*head);
}
