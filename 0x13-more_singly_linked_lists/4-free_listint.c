#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free a list
 * @head: head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

