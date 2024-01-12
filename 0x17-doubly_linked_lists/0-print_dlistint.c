#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * size_t print_dlistint - prints all the elements of a dlistint_t list
 * listint_t *head: pointer to the head of the list
 * @next: points to the next node
 *
 * return: number of nodes
 * 
 */
int main(void)
{
    size_t print_dlistint(const dlistint_t *h)
    {
        size_t count = 0;
        for (; h != NULL; h = h->next)
        {
            printf("%d\n", h->n);
            count++;
        }
    }
}
