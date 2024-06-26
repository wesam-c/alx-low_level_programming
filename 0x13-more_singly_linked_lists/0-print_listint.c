#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list
* @h: A pointer to the head of the list_t list.
*
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
        nodes++;
	}

	return (nodes);
}