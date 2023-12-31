#include "lists.h"
#include <string.h>
/**
 * print_listint - prints list
 * @h:- singly linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}

