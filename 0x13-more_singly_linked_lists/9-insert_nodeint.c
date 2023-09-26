#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node
 * @head: head of the list
 * @idx: index of node
 * @n: value of node
 * Return: the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *temphead = (*head);
	unsigned int i = 0;

	if (head == NULL || new == NULL)
	{
		return (NULL);
	}
	while (temphead)
	{
		if (idx == i)
		{
			if (idx == 0)
			{
				new->next = (*head);
				new->n = n;
				(*head) = new;
				return (*head);
			}
			new->next = temphead->next;
			new->n = n;
			temphead->next = new;
			temphead = new;
			return (temphead);
		}
		temphead = temphead->next;
		i++;
	}
	return (NULL);
}

