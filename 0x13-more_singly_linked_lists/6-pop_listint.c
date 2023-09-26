#include "lists.h"
/**
 * pop_listint - pop the head
 * @head: head of the list
 * Return: value of the head
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL)
	{
		return (0);
	}
	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;
	return (n);
}

