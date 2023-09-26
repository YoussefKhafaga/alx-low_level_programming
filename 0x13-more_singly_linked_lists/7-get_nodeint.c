#include "lists.h"
/**
 * get_nodeint_at_index - get node index
 * @head: head of the list
 * @index: index of the node
 * Return: node matching the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (index == i)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}

