#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head oss a list
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t xnode = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		xnode++;
	}
	return (xnode);
}
