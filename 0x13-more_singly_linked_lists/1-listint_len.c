#include "lists.h"

/**
* listint_len - returns the number of elements without printing
* @h: A pointer to the head of the list_t list.
*
* Return: the number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
        nodes++;
	}

	return (nodes);
}