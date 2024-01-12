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
    dlistint_t *new = NULL;  // Declare a pointer to a new node

    new = malloc(sizeof(dlistint_t));  // Allocate memory for the new node
    if (new == NULL)  // Check if memory allocation was successful
    {
        return (NULL);  // Return NULL if memory allocation failed
    }

    new->n = n;  // Set the value of the new node to the input value 'n'

    if (*head)  // Check if the doubly linked list is not empty
    {
        new->next = *head;  // Set the next pointer of the new node to the current head
        new->prev = NULL;   // Corrected: Set the prev pointer of the new node to NULL (as it is the new head)
        (*head)->prev = new;  // Update the prev pointer of the old head to the new node
        *head = new;  // Update the head to point to the new node
        return (*head);  // Return the address of the new head
    }

    new->next = *head;  // Set the next pointer of the new node to the current head (which is NULL)
    new->prev = NULL;   // Set the prev pointer of the new node to NULL (as it is the new head)
    *head = new;  // Update the head to point to the new node
    return (*head);  // Return the address of the new head
}
