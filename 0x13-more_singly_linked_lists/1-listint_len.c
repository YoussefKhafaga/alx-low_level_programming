#include "lists.h"
#include <string.h>
/**
 * listint_len - prints list
 * @h:- singly linked list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return ((size_t)n);
}

