#include "lists.h"
/**
 * dlistint_len - gets the length of the linked list
 * @h: head of the list
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count += 1;
	}
	return (count);
}

