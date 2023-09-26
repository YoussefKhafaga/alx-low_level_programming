#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node
 * @head: head of the list
 * @index: index of the node
 * Return: 1 if succedded and -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temphead;
	unsigned int i = 0;

	temphead = (*head);
	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = (*head);
		(*head) = (*head)->next;
		free(temp);
		return (1);
	}
	while (*head)
	{
		if (i == index - 1)
		{
			if ((*head)->next->next == NULL)
			{
				temp = (*head)->next;
				free(temp);
				temp = NULL;
				(*head)->next = NULL;
				(*head) = temphead;
				return (1);
			}
			temp = (*head)->next;
			(*head)->next = (*head)->next->next;
			free(temp);
			temp = NULL;
			(*head) = temphead;
			return (1);
		}

		i++;
		(*head) = (*head)->next;
	}
	return (-1);
}

