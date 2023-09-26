#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node
 * @head: head of the list
 * @index: index of the node
 * Return: 1 if succedded and -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	while (*head)
	{
		if (i == index-1)
		{
			temp = (*head)->next;
			(*head)->next = (*head)->next->next;
			free(temp);
			temp = NULL;
			return (1);
		}
		(*head) = (*head)->next;
	}
	return (-1);
}

