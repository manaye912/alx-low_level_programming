#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: head of a list 
 * Rwturn: number of nudes
 */
size_t listint_len(const listint_t *h)
{
	size_t xnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		xnodes++;
	}
	return (xnodes);
}
