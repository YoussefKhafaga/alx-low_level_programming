#include "lists.h"
#include <string.h>
/**
 * print_list - prints list
 * @h:- singly linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int n = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("%s", h->str);
		}
		n++;
		h = h->next;
	}
	return ((size_t)n);
}

