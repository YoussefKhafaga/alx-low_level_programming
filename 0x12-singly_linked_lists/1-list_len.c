#include "lists.h"
#include <string.h>
/**
 * list_len - prints list
 * @h:- singly linked list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return ((size_t)n);
}

